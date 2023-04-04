#include <iostream>
#include <string>
using namespace std;
struct Candybar {

    string Name;
    double Weigth = 0;
    int Calories = 0;


};
int main() {
    Candybar snack[3];
    snack[0] = { "Mocha Munch", 2.3, 350 };
    snack[1] = { "Snickers" ,3.0, 400 };
    snack[2] = { "Mars", 2.7, 200 };
    cout << snack[0].Name << " " << snack[0].Weigth << " " << snack[0].Calories << endl;
    cout << snack[1].Name << " " << snack[1].Weigth << " " << snack[1].Calories << endl;
    cout << snack[2].Name << " " << snack[2].Weigth << " " << snack[2].Calories << endl;
    return 0;
}
