#include <iostream>


using namespace std;

int main() {
    int Num1, Num2, sum = 0;
    cout << "Enter Number 1: ";
    cin >> Num1;
    cout << "Enter Number 2: ";
    cin >> Num2;
    for (int i = Num1; i <= Num2; i++) {

        sum += i;

    }
    cout << " = " << sum;

    return 0;
}

