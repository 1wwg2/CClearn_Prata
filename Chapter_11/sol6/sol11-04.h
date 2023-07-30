#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };		// ������ �� ����� 
	int stone;						// ������ ������� 
	double pds_left;				// ������� ����� ������ 
	double pounds;					// ����� ��� � ������ 
public:
	Stonewt(double lbs);			// ����������� ��� �������� � ������ 
	Stonewt(int stn, double lbs);	// ����������� ��� �������� � ������� � ������ 
	Stonewt();					    // ����������� �� ��������� 
	~Stonewt();
	void show_lbs() const;			// ����������� ���� � ������� ������ 
	void show_stn() const;			// ����������� ���� � ������� ������� 
	bool operator==(Stonewt& st);
	bool operator>=(Stonewt& st);
	bool operator<=(Stonewt& st);
	bool operator>(Stonewt& st);
	bool operator<(Stonewt& st);
	bool operator!=(Stonewt& st);
	Stonewt ston() { return stone; }
};

#endif 