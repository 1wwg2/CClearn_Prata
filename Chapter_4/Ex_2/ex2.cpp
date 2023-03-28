/*-------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
int main() {
   
    const int ArrSize = 20;
    char Name [ArrSize];
    char dessert[ArrSize];
    cout << "What`s your name?: ";
    cin.getline(Name, ArrSize);
    cout << "Enter yuor favourite dessert?: ";
    cin.getline(dessert, ArrSize);
    cout << " I have some delicious " << dessert;
    cout << " for you, " << Name;

    return 0;
}
------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;
int main() {

    string Name;
    string dessert;
    cout << "What`s your name?: ";
    getline(cin, Name);
    cout << "Enter yuor favourite dessert?: ";
    getline(cin, dessert);
    cout << " I have some delicious " << dessert;
    cout << " for you, " << Name;

    return 0;
}
