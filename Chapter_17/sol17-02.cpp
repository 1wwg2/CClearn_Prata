#include "Header.h"


int main()
{
	string inp;
	ofstream file;
	cout << "Enter name of file: ";
	getline(cin, inp);
	file.open(inp + ".txt");
	if (!file.is_open())
	{
		cout << "[-] BAD!";
		exit(EXIT_FAILURE);
	}
	cout << "Enter some information(quit to quit): ";
	while (!file.eof())
	{
		getline(cin, inp);
		file << inp << endl;
		if (inp == "quit")
		{
			cout << "goodbye!" << endl;
			file << "==END WORK OF PROGRAM==";
			break;
		}
	}
	file.close();
	return 0;
}

