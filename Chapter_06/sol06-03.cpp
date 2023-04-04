#include <iostream>

using namespace std;
int main() {

    char choise;
    cout << "Please enter one of the following choises: " << endl;
    cout << "c) carnivore\t " << "p) pianist " << endl;
    cout << "t) tree\t\t " << "g) game" << endl;
    while (1) {
        cout << "Please enter c, p, t or g: ";
        cin >> choise;
        if (choise == 'c' || choise == 'p' || choise == 't' || choise == 'g') {
            break;
        }
    }
    switch (choise) {
    case 'c': cout << "A maple is carvinore"; break;
    case 'p': cout << "A maple is pianist"; break;
    case 't': cout << "A maple is tree"; break;
    case 'g': cout << "A maple is game"; break;
    default: cout << "Err";
    }



    return 0;
}