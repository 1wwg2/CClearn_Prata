#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Stonewt
{
public:
	enum State { STOWN, INT_FUNTS, DOUBLE_FUNTS };
private:
	State state;
	enum { Lbs_per_stn = 14 };		// фунтов на стоун 
	int stone;						// полных стоунов 
	double pds_left;				// дробное число фунтов 
	double pounds;					// общий вес в фунтах 
public:

	Stonewt(double lbs);			// конструктор для значения в фунтах 
	Stonewt(int stn, double lbs);	// конструктор для значения в стоунах и фунтах 
	Stonewt();					    // конструктор по умолчанию 
	~Stonewt();
	friend ostream& operator<<(ostream& os, Stonewt& st);
	Stonewt operator+(Stonewt& st);
	Stonewt operator-(Stonewt& st);
	Stonewt operator*(Stonewt& st);
	void mode(int ch);
};

#endif 