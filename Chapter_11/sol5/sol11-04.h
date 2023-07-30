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
	enum { Lbs_per_stn = 14 };		// ������ �� ����� 
	int stone;						// ������ ������� 
	double pds_left;				// ������� ����� ������ 
	double pounds;					// ����� ��� � ������ 
public:

	Stonewt(double lbs);			// ����������� ��� �������� � ������ 
	Stonewt(int stn, double lbs);	// ����������� ��� �������� � ������� � ������ 
	Stonewt();					    // ����������� �� ��������� 
	~Stonewt();
	friend ostream& operator<<(ostream& os, Stonewt& st);
	Stonewt operator+(Stonewt& st);
	Stonewt operator-(Stonewt& st);
	Stonewt operator*(Stonewt& st);
	void mode(int ch);
};

#endif 