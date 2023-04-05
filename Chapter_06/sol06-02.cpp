#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<double, 10> Arr;

    double donat, sum = 0.0;
    int cnt = 0, i = 0;
    cout << "Enter donation values: ";
    for (; i < Arr.size() && cin >> donat; i++)
    {
        Arr[i] = donat;
        sum += donat;
        cout << "Enter donation values: ";
    }
    if (i != 0)
    {
        double avr = sum / i;
        for (int j = 0; j < i; j++)
        {
            if (Arr[j] > avr)
                cnt++;
        }
        cout << "Average = " << avr << "; Numbers larger than average = "
            << cnt << endl;
    }
    else
        cout << "Ooops.. No data." << endl;
    return 0;
}