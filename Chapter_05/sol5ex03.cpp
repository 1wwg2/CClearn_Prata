#include <iostream>

using namespace std;

int main() {

    int Num = 1, sum = 0;
    cout << "Enter numbers, '0' to Exit: ";

    while (Num != 0) {

        cin >> Num;
        sum += Num;
        cout << " = " << sum << endl;
    }
    

    return 0;
}

