#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};

void setgolf(golf& g, const char* name, int hc);
int setgolf(golf& g);
void handicap(golf& g, int hc);
void showgolf(const golf& g);

#endif 