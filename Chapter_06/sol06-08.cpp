#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream File;
    char ch;
    int sum = 0;
    File.open("sol8.txt");
    if (!File.is_open()) {
        cout << "Err!";
        exit(-1);
    }
    while (File.good()) {
        File >> ch;
        sum++;
    }
    cout << sum;

    return 0;
}