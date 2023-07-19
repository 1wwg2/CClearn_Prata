#include "Header.h"


int main()
{
    int ch, ch1;
    char name[Len];
    golf p;
    p.setgolf();
    p.showgolf();
    p.sethandicap(15);
    cout << "After func handicap: " << endl;
    p.showgolf();
    cout << "Enter number of arr class: ";
    cin >> ch;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < ch; i++)
    {
        cout << "Enter name [" << i + 1 << "] golf: ";
        cin.getline(name, Len);

        cout << endl;
        cout << "Enter handicap: ";
        cin >> ch1;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        golf golf1(name, ch1);
        golf1.showgolf();
    }

    return 0;
}

