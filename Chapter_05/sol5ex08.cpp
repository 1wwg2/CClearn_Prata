#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[20];
    int count = 0;
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    while (strcmp(word, "done"))
    {
        cin >> word;
        count++;
    }
    cout << "You entered a total of " << count << " words." << "\n";
    return 0;
}
