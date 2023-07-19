#include "Header.h"
void strcount(const string& str);

int main()
{
	using namespace std;
	string input;
	char next;

	cout << "Enter a line:\n";
	getline(cin, input);
	while (input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";

	cin.clear();
	return 0;
}

void strcount(const string& str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	for (char ch : str)
	{
		if (ch == ' ')
		{
			total++;
			continue;
		}
		count++;

	}
	total += count;

	cout << count << " whitout space characters\n";
	cout << total << " characters total\n";

}

