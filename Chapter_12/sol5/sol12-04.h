#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

class Stock // объ€вление класса
{
private:
	char* NameComp;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock(); // конструктор по умолчанию 
	Stock(const char* co, long n = 0, double pr = 0.0);
	~Stock(); // деструктор 
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock& topval(const Stock& s) const;
};


