#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
#include <cmath>
#include <iostream>
#include <fstream>
//-------------------------------------------------------------------------------------------------
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };
		// RECT � ��� ������ ������������� ���������, POL � ��� ������ �������� ��������� 
	private:
		double x; // �������������� �������� 
		double y; // ������������ �������� 
		double mag; // ����� ������� 
		double ang; // ����������� ������� � �������� 
		Mode mode;  // RECT ��� POL 
		// �������� ������ ��� ��������� �������� 

		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double nl, double n2, Mode form = RECT);
		void reset(double nl, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; } // �������� �������� � 
		double yval() const { return y; } // �������� �������� � 
		double magval() const { return sqrt(x * x + y * y); } // �������� ������ 
		double angval() const {
			if (x == 0.0 && y == 0.0)
				return 0.0;
			else
				return atan2(y, x);
		} // �������� ���� 
		void polar_mode(); // ������������� ����� � POL 
		void rect_mode();  // ������������� ����� � RECT 
		// ���������� �������� 
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		// ������ 
		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	};
}


#endif 