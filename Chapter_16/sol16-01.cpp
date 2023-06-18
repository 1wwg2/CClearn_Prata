#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
#include<cstring>
#include <cctype>
using namespace std;
bool Palindrom(string& str);
int main()
{
	string f = "otto";
	Palindrom(f);
	return 0;
}


bool Palindrom(string& str)
{
	string subst0, subst;


	for (auto i = str.rbegin(); i != str.rend(); i++)
	{
		subst += *i;
	}
	if (subst == str)
	{
		cout << "string: " << str << " Palindrom";
		return true;
	}
	else
	{
		cout << "string: " << str << " NO Palindrom";
		return false;
	}
}