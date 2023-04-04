#include <iostream>

using namespace std;

int main() {

    int CoutSell = 0;
    int Sum = 0;
    string Array[] =
    {
     "January", "February", "March",
     "April"  , "May"     , "June" ,
     "July"   , "August"  , "September",
     "October", "November", "December"
    };

    for (int i = 0; i < 12; i++) {

        cout << i + 1 << ". " << Array[i] << ": ";
        cin >> CoutSell;
        Sum += CoutSell;
    }
    cout << Sum;

    return 0;
}
