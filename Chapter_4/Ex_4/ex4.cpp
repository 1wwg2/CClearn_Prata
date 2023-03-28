#include <iostream>
<<<<<<< Updated upstream

#include <string>
using namespace std;
int main() {

    string FirstName, LastName;
    cout << "Enter your First name: ";
    getline(cin, FirstName);
    cout << "Enter your Last name: ";
    getline(cin, LastName);

    FirstName += ", " + LastName;
    cout << "Here's the information in a single string : " << FirstName;


    return 0;
}
=======
>>>>>>> Stashed changes

#include <string>
using namespace std;
int main() {

    string FirstName, LastName;
    cout << "Enter your First name: ";
    getline(cin, FirstName);
    cout << "Enter your Last name: ";
    getline(cin, LastName);

    FirstName += ", " + LastName;
    cout << "Here's the information in a single string : " << FirstName;


    return 0;
}
