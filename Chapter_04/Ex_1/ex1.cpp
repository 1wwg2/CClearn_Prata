#include <iostream>
#include <string>
using namespace std;
int main() {
    char FirstName[25], LastName[25], Graduate;
    int Age;
    cout << "What`s is your first name?: ";
    cin.getline(FirstName, 25);
    cout << "What`s is your last name?: ";
    cin.getline(LastName, 25);
    cout << "What letter grade do you deserve ?";
    cin >> Graduate;
    cout << "Your Age?: ";
    cin >> Age;
    cout << LastName << ", " << FirstName << endl;
    cout << "Grade: " << ++Graduate << endl ;
    cout << "Age; " << Age;

    return 0;
}
