#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator+(const Time& t, const Time& t1);
	friend Time operator-(const Time& t, const Time& t1);
	friend Time operator*(const Time& t, double n);
	friend Time operator*(double m, const Time& t)
	{
		return t * m;
	} // встроенное определение 
	friend std::ostream& operator<<(std::ostream& os, const Time& t);

};
#endif 