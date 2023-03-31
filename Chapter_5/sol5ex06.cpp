#include <iostream>

using namespace std;

int main() {


    int Sum = 0;
    int CoutSell[3][12]{};
    string Years[] = {
        "First",
        "Second",
        "Third"
    };
    string Array[] =
    {
     "January", "February", "March",
     "April"  , "May"     , "June" ,
     "July"   , "August"  , "September",
     "October", "November", "December"
    };

    for (int i = 0; i < 3; i++) {
        cout << "=======" << Years[i] << " year" << "=======" << endl;
        for (int j = 0; j < 12; j++) {

            cout << j + 1 << ". " << Array[j] << ": ";

            cin >> CoutSell[i][j];
            Sum += CoutSell[i][j];

        }
        cout << Sum << " of the " << Years[i] << " year" << endl;
    }
    cout << "===================================" << endl;
    cout << "Total sum : " << Sum;

    return 0;
}

