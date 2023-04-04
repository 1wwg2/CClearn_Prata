#include <iostream>
#include <string>
using namespace std;
struct Candybar{

    string Name;
    double Weigth = 0;
    int Calories = 0;
        

} snack;
int main() {
    
    snack = {
       "Mocha Munch",
       2.3,
       350,
    };
    cout << snack.Name << " " << snack.Weigth<< " " << snack.Calories;

    return 0;
}
