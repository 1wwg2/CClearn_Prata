#include "Header.h"
Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : obj(l), years(y)
{
	data.first.resize(years);
	data.second.resize(years);
	for (int i = 0; i < y; i++)
	{
		data.first[i] = yr[i];
		data.second[i] = bot[i];
	}

}
Wine::Wine(const char* l, int y) : obj(l), years(y)
{
	data.first.resize(years);
	data.second.resize(years);
}
Wine::~Wine() {}
void Wine::GetBottles()
{
	int n = 0;
	cout << "To " << obj << " years " << years << endl;

	for (int i = 0; i < years; i++)
	{
		cout << "Enter year: ";
		cin >> n;
		data.first[i] = n;
		cout << "Enter bottles for that year: ";
		cin >> n;
		data.second[i] = n;
		cout << endl;
	}

}

void Wine::Show()
{
	cout << obj << ": " << endl;
	for (int i = 0; i < years; i++)
	{
		cout << data.first[i] << " " << data.second[i] << endl;
	}

}

int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < years; i++)
	{
		sum += data.second[i];
	}
	return sum;
}


const string& Wine::Label() const
{
	return obj;
}