#include "Header.h"

int main()
{
    int ch, ch1;
    char name[Len];
    golf p;
    setgolf(p);
    showgolf(p);
    handicap(p, 15);
    cout << "After func handicap: " << endl;
    showgolf(p);
    cout << "Enter number of struct: ";
    cin >> ch;
    golf* f = new golf[ch];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < ch; i++)
    {
        cout << "Enter name [" << i + 1 << "] golf: ";
        cin.getline(name, Len);

        cout << endl;
        cout << "Enter handicap: ";
        cin >> ch1;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        setgolf(f[i], name, ch1);
        showgolf(f[i]);
    }



    return 0;
}

