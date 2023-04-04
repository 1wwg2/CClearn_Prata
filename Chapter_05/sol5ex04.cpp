#include <iostream>

using namespace std;

int main() {


    double KleoBal = 100;
    double DaphnaBal = 100;


    while (KleoBal <= DaphnaBal) {
        DaphnaBal += 10;

        KleoBal += KleoBal * 0.05;

        cout << "Daphna: " << DaphnaBal << "\t"
            << "Kleo: " << KleoBal << "\t" << endl;


    }

    return 0;
}

