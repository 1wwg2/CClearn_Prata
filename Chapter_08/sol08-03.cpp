#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void strCheck(string& str);
int main() {
	string str;
	while (str != "q") {
		cout << "Enter string, 'q' to exit: ";
		cin >> str;
		strCheck(str);
	}
	cout << "End!";

	return 0;
}

void strCheck(string& str) {
	for (int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}
	cout << str << endl;
}