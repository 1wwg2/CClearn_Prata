#include <iostream>
#include <cstring>

using namespace std;
int main() {
    const int SizeArr = 50;
    char FirstName[SizeArr], LastName[SizeArr];
    cout << "Enter your First name: ";
    cin.getline(FirstName, SizeArr);
    cout << "Enter your Last name: ";
    cin.getline(LastName, SizeArr);
    strcat_s(FirstName, ", ");
    strcat_s(FirstName, LastName);
    cout << "Here's the information in the single string : " << FirstName;


    return 0;
}