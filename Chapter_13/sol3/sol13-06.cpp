#include "Header.h"

const int numb = 4;
const int length = 40;

int main()
{
	char len[length];
	char style[length];
	char color[length];
	int rating = 0;
	abcDMA* arr[numb];
	char ch;

	for (int i = 0; i < numb; i++)
	{
		cout << i + 1 << " Element, enter the label: ";
		cin.getline(len, length);
		cout << "Enter rating: ";
		cin >> rating;
		cin.get();
		cout << "Enter 1 to make BASE obj" << endl;
		cout << "Enter 2 to make lacksDMA obj" << endl;
		cout << "Enter 3 to make hasDMA obj" << endl;
		cout << endl;
		cin >> ch;
		switch (ch)
		{
		case '1':
			arr[i] = new baseDMA(len, rating); break;
		case '2':
			cout << "Enter color: ";
			cin.getline(color, length);
			arr[i] = new lacksDMA(color, len, rating);
			break;
		case '3':
			cout << "Enter style: ";
			cin.getline(style, length);
			arr[i] = new lacksDMA(style, len, rating);
			break;
		default:
			cout << "Incorrect choise, make to BASE " << endl;
			arr[i] = new baseDMA(len, rating); break;
		}
	}
	for (int i = 0; i < numb; i++)
	{
		cout << "Element: " << i + 1 << endl;
		arr[i]->View();
	}

	for (int i = 0; i < numb; i++)
	{
		delete arr[i]; // освобождение памяти 
	}
	cout << "Done.\n";



	return 0;
}

