#include "Header.h"
#include <iostream>
#include <cstring>


//-------------------------------------------------------------------------------------------------
int main()
{

	Stonewt st0;
	std::cout << "Object var_a constructed by default constructor: " << st0 << std::endl;

	Stonewt var_b(62.52);
	std::cout << "Object var_b constructed from double value: " << var_b << std::endl;

	Stonewt var_c(10, 60.21);
	std::cout << "Object var_c constructed from stone, double values: " << var_c << std::endl;

	var_c.mode(1);
	std::cout << "Object var_c constructed from stone, int values: " << var_c << std::endl;
	var_c.mode(2);
	var_b.mode(2);

	Stonewt st1;
	st1.mode(2);
	st1 = var_b + var_c;
	cout << st1 << endl;
	Stonewt st2;
	st2.mode(2);
	st2 = var_b - var_c;
	cout << st2 << endl;
	Stonewt st3;
	st3.mode(2);
	st3 = var_b * var_c;
	cout << st3 << endl;
	return 0;
}