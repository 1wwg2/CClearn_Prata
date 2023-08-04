#include "Header.h"
// ������������� ������������ ����� ������ 
int String::num_strings = 0;
//-------------------------------------------------------------------------------------------------
// ����������� ����� 
int String::HowMany()
{
	return num_strings;
}
//-------------------------------------------------------------------------------------------------
// �������� String �� �-������ 
String::String(const char* s)
{
	len = std::strlen(s);						// ��������� ������� 
	str = new char[len + 1];					// ��������� ������ 
	std::strcpy(str, s);						// ������������� ��������� 
	num_strings++;								// ������������� �������� �������� 
}
//-------------------------------------------------------------------------------------------------
String::String()								// ����������� �� ��������� 
{
	len = 4;
	str = new char[1];
	str[0] = '\0';								// ������ �� ��������� 
	num_strings++;
}
//-------------------------------------------------------------------------------------------------
String::String(const String& st)
{
	num_strings++;								// ��������� ���������� ������������ ����� 
	len = st.len;								// ����� �� �� 
	str = new char[len + 1];					// ��������� ������ 
	std::strcpy(str, st.str);					// ����������� ������ � ����� ����� 
}
//-------------------------------------------------------------------------------------------------
String::~String()								// ����������� ���������� 
{
	--num_strings; // ��������� 
	delete[] str;  // ��������� 
}
//-------------------------------------------------------------------------------------------------
// ������ ������������� �������� 
// ������������ ������� String ������� String 
String& String::operator= (const String& st)
{
	if (this == &st)
	{
		return *this;
	}
	delete[] str;

	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);

	return *this;
}
//-------------------------------------------------------------------------------------------------
// ������������ �-������ ������� String 
String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}
//-------------------------------------------------------------------------------------------------
// ������ ��� ������ � ������ ��������� �������� � ������������� ������� String 
char& String::operator [] (int i)
{
	return str[i];
}
//-------------------------------------------------------------------------------------------------
// ������ ������ ��� ������ ��������� �������� � ����������� ������� String 
const char& String::operator [] (int i) const
{
	return str[i];
}
//-------------------------------------------------------------------------------------------------
// ������������� ������� ������������� �������� 
bool operator<(const String& stl, const String& st2)
{
	return (std::strcmp(stl.str, st2.str) < 0);
}
//-------------------------------------------------------------------------------------------------
bool operator>(const String& stl, const String& st2)
{
	return st2.str < stl.str;
}
//-------------------------------------------------------------------------------------------------
bool operator==(const String& stl, const String& st2)
{
	return (std::strcmp(stl.str, st2.str) == 0);
}
//-------------------------------------------------------------------------------------------------
// ������� ����� String 
ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}
//-------------------------------------------------------------------------------------------------
// ������� ���� String 
istream& operator>>(istream& is, String& st)
{
	const int bufferSize = 1000; // ������������ ������ �������� ������
	char buffer[bufferSize];
	is.getline(buffer, bufferSize); // ��������� ������ � ���������
	st = buffer; // ����������� �������� ������� String
	return is;
}

String& String::operator+(const String& st)
{
	String temp;
	delete temp.str;

	temp.len = strlen(str) + strlen(st.str);
	temp.str = new char[temp.len + 1];
	strcat(strcpy(temp.str, str), st.str);

	return temp;
}
String operator+(const char* s, const String& st)
{
	String temp;
	temp.len = st.len + strlen(s);
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, s);
	strcat(temp.str, st.str);
	return temp;
}

void String::stringup()
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}

}
void String::stringlow()
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (isalpha(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}
}
int String::has(const char& ch)
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ch)
		{
			count++;
		}
	}

	return count;
}

