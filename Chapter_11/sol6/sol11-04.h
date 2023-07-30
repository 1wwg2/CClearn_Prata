#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };		// фунтов на стоун 
	int stone;						// полных стоунов 
	double pds_left;				// дробное число фунтов 
	double pounds;					// общий вес в фунтах 
public:
	Stonewt(double lbs);			// конструктор для значения в фунтах 
	Stonewt(int stn, double lbs);	// конструктор для значения в стоунах и фунтах 
	Stonewt();					    // конструктор по умолчанию 
	~Stonewt();
	void show_lbs() const;			// отображение веса в формате фунтов 
	void show_stn() const;			// отображение веса в формате стоунов 
	bool operator==(Stonewt& st);
	bool operator>=(Stonewt& st);
	bool operator<=(Stonewt& st);
	bool operator>(Stonewt& st);
	bool operator<(Stonewt& st);
	bool operator!=(Stonewt& st);
	Stonewt ston() { return stone; }
};

#endif 