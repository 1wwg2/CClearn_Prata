#include <iostream>
#include <string>
using namespace std;
struct Candybar {

    string Name;
    double Diametr = 0;
    double Value = 0;


};
int main() {

    Candybar* PizzaHut = new Candybar;
    cout << "Enter diametr: ";
    cin >> PizzaHut->Diametr;


    cout << "Enter Name: ";
    getline(cin, PizzaHut->Name);

    cout << "Enter Value: ";
    cin >> PizzaHut->Value;

    cout << PizzaHut->Name << " " << PizzaHut->Diametr << " " << PizzaHut->Value;



    return 0;
}


