#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
	double real;
	double imagine;
public:
	Complex(double r = 0.0, double i = 0.0) : real(r), imagine(i) {}
	Complex operator+(const Complex& st);
	Complex operator-(const Complex& st);
	Complex operator*(const Complex& st);
	Complex operator~();
	friend istream& operator>>(istream& is, Complex& co);
	friend ostream& operator<<(ostream& os, const Complex& co);
	friend Complex operator*(int num, const Complex& st);
};



#endif 