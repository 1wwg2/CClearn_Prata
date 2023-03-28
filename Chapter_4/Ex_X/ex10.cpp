#include <iostream>
#include <array>
using namespace std;
int main() {
    array<double, 3> Arr;
    cout << "Enter three times for the 40-meter dash\n 1: ";
    cin >> Arr[0];
    cout << " 2: ";
    cin >> Arr[1];
    cout << " 3: ";
    cin >> Arr[2];
    cout << "Medium value: " << (Arr[0] + Arr[1] + Arr[2]) / 3 << endl;


    return 0;
}

