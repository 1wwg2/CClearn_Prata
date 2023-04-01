#include <iostream>

using namespace std;

struct Car {

    string Name;
    int YearMade = 0;

};

int main() {

    int Count = 0;

    cout << "How many car need to include in catalog?: ";
    cin >> Count;

    Car* car = new Car[Count];
    for (int i = 0; i < Count; i++) {
        cout << "Car number " << i + 1 << ": " << endl;
        cout << "Enter name: ";
        cin >> car[i].Name;
        cout << "Enter year make: ";
        cin >> car[i].YearMade;

    }
    cout << "=================================" << endl;
    cout << "Your collection: " << endl;
    for (int i = 0; i < Count; i++) {
        cout << car[i].Name << "       " << car[i].YearMade << endl;
    }


    return 0;
}

