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
	string f = "Madam, I`m Adam";
	Palindrom(f);
	return 0;
}


bool Palindrom(string& str)
{
	string subst0, subst;

	for (int i = 0; i < str.size(); i++)
	{
		if (ispunct(str[i]) || isspace(str[i]))
		{
			continue;
		}
		str[i] = tolower(str[i]);
		subst0 += str[i];
	}
	for (auto i = subst0.rbegin(); i != subst0.rend(); i++)
	{
		subst += *i;
	}
	if (subst == subst0)
	{
		cout << "string: " << subst0 << " Palindrom";
		return true;
	}
	else
	{
		cout << "string: " << subst0 << " NO Palindrom";
		return false;
	}
}