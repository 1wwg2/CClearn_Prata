#include <iostream>
#include <array>
using namespace std;
const int ArrSize = 101;
int main() {


    array<long double, ArrSize> factorials;

    factorials[1] = factorials[0] = 1.0L;

    for (int i = 2; i < ArrSize; i++) {
        factorials[i] = i * factorials[i - 1];

    }

    for (int i = 0; i < ArrSize; i++) {
        cout << i << "! = " << factorials[i] << endl;
    }



    return 0;
}

