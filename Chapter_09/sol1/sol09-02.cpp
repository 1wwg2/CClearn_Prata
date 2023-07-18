#include "Header.h"
void setgolf(golf& g, const char* name, int hc)
{
	g.handicap = hc;
	strcpy(g.fullname, name);

}
int setgolf(golf& g)
{
	cout << "Enter Name: ";
	cin.getline(g.fullname, Len);
	cout << "Enter handicap: ";
	cin >> g.handicap;

	if (strlen(g.fullname) == 0)
	{
		return 0;
	}

	return 1;
}
void handicap(golf& g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf& g)
{
	cout << g.fullname << " " << g.handicap << endl;
}