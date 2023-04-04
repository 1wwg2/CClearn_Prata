#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch = '0';
    while (ch != '@') {
        cin.get(ch);
        if (!isdigit(ch)) {

            if (isupper(ch)) {
                ch = tolower(ch);
            }
            else {
                ch = toupper(ch);
            }
            cout << ch;
        }
    }
    return 0;
}