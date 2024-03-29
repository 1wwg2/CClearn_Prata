#include "Header.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction, target, dstep;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long min, max, total;
    int trials;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        cout << "Enter trials: ";
        if (!(cin >> trials))
            break;
        total = 0;
        for (int i = 0; i < trials; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
            total += steps;
            if (i == 0) min = max = steps;
            if (min > steps) min = steps;
            if (max < steps) max = steps;
            steps = 0;
            result.reset(0.0, 0.0);
        }
        cout << "The highest, lowest, and average number of steps for "
            << trials << " trials:\n";
        cout << " Highest: " << max << "\n Lowest : " << min
            << "\n Average: " << total / trials << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}