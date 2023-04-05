#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct bop {
    string fullname;
    string title;
    string bopname;
    int preference = 0;

};
int main() {
    bop* info = new bop[2];
    info[0].bopname = "Guisqw";
    info[0].fullname = "Garley HHH";
    info[0].title = "Wimp Macho";
    info[0].preference = 1;

    info[1].bopname = "dwaxxx";
    info[1].fullname = "Harl dad";
    info[1].title = "Junior";
    info[1].preference = 2;
    char ch = 0;
    while (ch != 'q') {
        cin >> ch;
        for (int i = 0; i < 2; i++) {
            switch (ch)
            {
            case 'a':cout << info[i].fullname << endl; break;
            case 'b': cout << info[i].bopname << endl; break;
            case 'c': cout << info[i].title << endl; break;
            case 'd': cout << info[i].preference << endl; break;
            default: cout << "Incorrect choise! " << endl; break;

            }
        }

    }
    cout << "Bye!";




    return 0;
}