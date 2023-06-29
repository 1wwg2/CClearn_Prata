#include "Header.h"


int main()
{
	string inp;
	ifstream file;
	ofstream filecpy;
	cout << "Enter name of original file: ";
	getline(cin, inp);
	file.open(inp + ".txt");
	if (!file.is_open())
	{
		cout << "[-] BAD!";
		exit(EXIT_FAILURE);
	}

	cout << "Enter name of copy file: ";
	getline(cin, inp);
	filecpy.open(inp + ".txt");
	if (!file.is_open())
	{
		cout << "[-] BAD!";
		exit(EXIT_FAILURE);
	}
	while (getline(file, inp))
	{
		filecpy << inp << endl;
	}



	file.close();
	filecpy.close();
	return 0;
}

