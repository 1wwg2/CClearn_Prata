#include "Header.h"
// ������������� ������ � ������ vect.cpp 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <cstdlib> // ��������� rand(), srand() 
#include <ctime> // �������� time() 


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
	srand(time(0)); // ��������� �������� ��� ���������� ��������� ����� 
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit) : ";
	// ���� ��������� ���������� (q ��� ����������) 
	while (cin >> target)
	{
		cout << "Enter step length: "; // ���� ����� ���� 
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
		file << result << endl; // ����� ������� ����� steps ����� 
		result.polar_mode();
		file << " or\n" << result << endl;
		file << "Average outward distance per step = "
			<< result.magval() / steps << endl; // ����� �������� ���������� �� ���� ��� 
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Sucsess!" << endl;
		cout << "Enter target distance (q to quit) : ";
		// ���� ��������� ���������� (q ��� ����������) 
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != ' \n ')
		continue;

	std::cin.get();
	std::cin.get();
	return 0;
}
