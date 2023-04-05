// Program without switch
#include <iostream>
#include <array>
#include <cstring>
using namespace std;
int main()
{
    string word;
    int count[3]{};
    char ch[] = { 'a' ,'e', 'i','o', 'u', 'y', 'A' ,'E', 'I','O', 'U', 'Y' };
    while (cin >> word && word != "q") {
        if (isalpha(word[0])) {
            if (word.find_first_not_of(ch)) {

                count[0]++;
            }
            else {
                count[1]++;
            }
        }
        else
        {
            count[2]++;
        }
    }
    cout << "Vowels: " << count[0] << endl;
    cout << "Consonants: " << count[1] << endl;
    cout << "Other: " << count[2] << endl;





    return 0;
}