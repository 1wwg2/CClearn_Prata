#include "Header.h"
#include <iostream>
#include <cstring>

const int ELEMENTS = 3;
//-------------------------------------------------------------------------------------------------
int main()
{
	int stone, count = 0;
	double pounds;
	Stonewt st0(11, 50.21), st1(8, 55.28), st2(8, 19.54);
	Stonewt arrST[ELEMENTS] = { st0, st1, st2 };

	for (int i = 3; i < ELEMENTS; i++)
	{
		cout << "Enter 3 el: " << endl;
		cout << i + 1 << " ElEMENT stone: ";
		cin >> stone;
		cout << i + 1 << " ElEMENT pounds: ";
		cin >> pounds;
		Stonewt temp(stone, pounds);
		arrST[i] = temp;
	}
	Stonewt min = arrST[0];
	Stonewt max = arrST[0];
	Stonewt temp(11, 0);
	for (Stonewt i : arrST)
	{
		if (i < min)
		{
			min = i;
		}
		if (i > max)
		{
			max = i;
		}
		if (i >= temp)
		{
			count++;
		}
		i.show_lbs();

	}

	cout << "Min element: ";
	min.show_lbs();

	cout << "Max element: ";
	max.show_lbs();

	cout << count << endl;

	return 0;
}

