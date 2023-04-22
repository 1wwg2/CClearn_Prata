#include<iostream>
using namespace std;

void strcount(const string& str);
int main() {

	string input;
	char next;
	cout << "Enter a line: " << endl;
	getline(cin, input);
	while (input != "") {

		strcount(input);
		cout << "Enter next line (empty line to quit: )" << endl;
		getline(cin, input);
	}
	cout << "Bye" << endl;

	return 0;
}

void strcount(const string& str) {
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			continue;
		}
		count++;
	}
	total += count;

	cout << count << " characters" << endl;
	cout << total << " characters total" << endl;
}