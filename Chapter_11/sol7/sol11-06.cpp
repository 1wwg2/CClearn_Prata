#include "Header.h"

Complex Complex::operator+(const Complex& st)
{
	return Complex(real + st.real, imagine + st.imagine);
}
Complex Complex::operator-(const Complex& st)
{
	return Complex(real - st.real, imagine - st.imagine);
}
Complex Complex::operator*(const Complex& st)
{
	return Complex(real * st.real - imagine * st.imagine, real * st.real + imagine * st.imagine);
}
Complex operator*(int num, const Complex& st)
{
	return Complex(num * st.real, num * st.imagine);
}
Complex Complex::operator~()
{
	return Complex(real, -imagine);
}

istream& operator>>(istream& is, Complex& co)
{
	cout << "Enter real: ";
	is >> co.real;
	cout << "Enter imagine: ";
	is >> co.imagine;
	return is;
}

ostream& operator<<(ostream& os, const Complex& co)
{
	os << co.real << " " << co.imagine;
	return os;
}