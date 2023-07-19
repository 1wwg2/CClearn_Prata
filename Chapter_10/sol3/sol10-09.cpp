#include "Header.h"

golf golf::setgolf()
{
	cout << "Enter Name: ";
	cin.getline(fullname, Len);
	cout << "Enter handicap: ";
	cin >> handicap;

	if (strlen(fullname) == 0)
	{
		return 0;
	}
	golf temp(fullname, handicap);
	return *this;
}
void golf::sethandicap(int hc)
{
	handicap = hc;
}
void golf::showgolf()
{
	cout << fullname << " " << handicap << endl;
}