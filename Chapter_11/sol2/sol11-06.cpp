#include "Header.h"
// Компилировать вместе с файлом vect.cpp 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <cstdlib> // прототипы rand(), srand() 
#include <ctime> // прототип time() 


//-------------------------------------------------------------------------------------------------
int main()
{
	ofstream file;
	file.open("ex11.1.txt");
	if (!file.is_open())
	{
		cout << "ERR";
		exit(EXIT_FAILURE);
	}
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); // начальное значение для генератора случайных чисел 
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit) : ";
	// Ввод заданного расстояния (q для завершения) 
	while (cin >> target)
	{
		cout << "Enter step length: "; // ввод длины шага 
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			file << steps << ": (x,y) = " << result << endl;
			steps++;

		}
		file << "After " << steps << " steps, the subject "
			"has the following location:\n";
		file << result << endl; // вывод позиции после steps шагов 
		result.polar_mode();
		file << " or\n" << result << endl;
		file << "Average outward distance per step = "
			<< result.magval() / steps << endl; // вывод среднего расстояния на один шаг 
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Sucsess!" << endl;
		cout << "Enter target distance (q to quit) : ";
		// Ввод заданного расстояния (q для завершения) 
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != ' \n ')
		continue;

	std::cin.get();
	std::cin.get();
	return 0;
}
