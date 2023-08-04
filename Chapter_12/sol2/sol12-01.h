#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;

class String
{
private:
	char* str;						// указатель на строку 
	int len;						// длина строки 
	static int num_strings;			// количество объектов 
	static const int CINLIM = 80;	// предел ввода для сіп 
public:
	// Конструкторы и другие методы 
	String(const char* s);			// конструктор 
	String();						// конструктор по умолчанию 
	String(const String&);			// конструктор копирования 
	~String();						// деструктор 
	int length() const { return len; }

	// Методы перегруженных операций 
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator [] (int i);
	const char& operator [] (int i) const;
	String& operator+(const String& st);
	void stringup();
	void stringlow();
	int has(const char& ch);

	// Дружественные функции перегруженных операций 
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& stl, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	friend String operator+(const char* s, const String& st);
	// Статическая функция 
	static int HowMany();
};


