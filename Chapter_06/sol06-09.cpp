#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct Patron {
    string Name;
    double money;
};


int main() {
    ifstream File;
    File.open("sol9.txt");
    int PatronsNum = 0;
    cout << "Enter number of Mecenate: " << endl;
    (File >> PatronsNum).get();
    int count = 0;

    Patron* List = new Patron[PatronsNum];

    for (int i = 0; i < PatronsNum; i++) {
        cout << "Enter name of " << i + 1 << ") Patron: " << endl;
        getline(File, List[i].Name);
        cout << "Enter donate of " << List[i].Name << ": " << endl;
        (File >> List[i].money).get();

    }
    cout << "\t===Grand Patrons===" << endl;
    for (int i = 0; i < PatronsNum; i++) {

        if (List[i].money >= 10000) {

            cout << List[i].Name << " \t" << List[i].money << endl;
            count++;
        }

    }
    if (count == 0)
    {
        cout << "none" << endl;
    }
    cout << "\t===Patrons===" << endl;
    for (int i = 0; i < PatronsNum; i++) {

        if (List[i].money < 10000) {

            cout << List[i].Name << " \t" << List[i].money << endl;
            count++;
        }
        if (count == 0)
        {
            cout << "none" << endl;
        }

    }

    delete[] List;
    return 0;
}