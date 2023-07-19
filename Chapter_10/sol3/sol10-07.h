#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

const int Len = 40;
class golf
{
private:
	char fullname[Len];
	int handicap;
public:
	golf(const char* name = "", int hc = 0) : handicap(hc) { strcpy(fullname, name); }
	void showgolf();
	void sethandicap(int hc);
	golf setgolf();
};





#endif 