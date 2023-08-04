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
	char* str;						// ��������� �� ������ 
	int len;						// ����� ������ 
	static int num_strings;			// ���������� �������� 
	static const int CINLIM = 80;	// ������ ����� ��� �� 
public:
	// ������������ � ������ ������ 
	String(const char* s);			// ����������� 
	String();						// ����������� �� ��������� 
	String(const String&);			// ����������� ����������� 
	~String();						// ���������� 
	int length() const { return len; }

	// ������ ������������� �������� 
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator [] (int i);
	const char& operator [] (int i) const;
	String& operator+(const String& st);
	void stringup();
	void stringlow();
	int has(const char& ch);

	// ������������� ������� ������������� �������� 
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& stl, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	friend String operator+(const char* s, const String& st);
	// ����������� ������� 
	static int HowMany();
};


