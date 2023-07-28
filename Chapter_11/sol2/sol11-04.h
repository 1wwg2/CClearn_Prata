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
		// RECT — для режима прямоугольных координат, POL — для режима полярных координат 
	private:
		double x; // горизонтальное значение 
		double y; // вертикальное значение 
		double mag; // длина вектора 
		double ang; // направление вектора в градусах 
		Mode mode;  // RECT или POL 
		// Закрытые методы для установки значений 

		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double nl, double n2, Mode form = RECT);
		void reset(double nl, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; } // сообщает значение х 
		double yval() const { return y; } // сообщает значение у 
		double magval() const { return sqrt(x * x + y * y); } // сообщает модуль 
		double angval() const {
			if (x == 0.0 && y == 0.0)
				return 0.0;
			else
				return atan2(y, x);
		} // сообщает угол 
		void polar_mode(); // устанавливает режим в POL 
		void rect_mode();  // устанавливает режим в RECT 
		// Перегрузка операций 
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		// Друзья 
		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	};
}


#endif 