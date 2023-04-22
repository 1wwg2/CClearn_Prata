#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char* s[] = { "Spring", "Summer", "Fall", "Winter" };

void fill(const char ра[]);

void show(const char da[]);
int main()
{
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	return 0;
}
void fill(const char ра[])
{

	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << s[i] << " expenses : ";
		cin >> (*ра)[i];

	}
}
void show(const char ра[], const char dа[]) {

	double total = 0.0;
	cout << " \nEXPENSES\ n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << pa[i] << ": $" << da[i] << endl;
		total += da[i];
		cout << " Total Expense s: $" << total << endl;
	}
}