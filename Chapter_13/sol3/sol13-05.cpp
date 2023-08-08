#include "Header.h"

abcDMA::abcDMA(const char* l, int r)
{
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}
abcDMA::abcDMA(const abcDMA& rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
}
abcDMA& abcDMA::operator=(const abcDMA& rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}
ostream& operator<<(std::ostream& os, const abcDMA& rs)
{
	os << "Label: " << rs.label << std::endl; // название 
	os << "Rating: " << rs.rating << std::endl; // рейтинг 
	return os;
}


void abcDMA::View()
{
	cout << "Label: " << label << endl; // название 
	cout << "Rating: " << rating << endl;
}

baseDMA::baseDMA(const char* l, int r) : abcDMA(l, r) {}
//-------------------------------------------------------------------------------------------------
baseDMA::baseDMA(const baseDMA& rs) : abcDMA(rs) {}
//-------------------------------------------------------------------------------------------------
baseDMA::~baseDMA() {}
//-------------------------------------------------------------------------------------------------
baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	abcDMA::operator=(rs);
	return *this;

}
void baseDMA::View()
{
	abcDMA::View();
}
//-------------------------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	operator<<(os, (const abcDMA&)rs);
	return os;
}
//-------------------------------------------------------------------------------------------------
// Методы lacksDMA 
lacksDMA::lacksDMA(const char* c, const char* l, int r) : abcDMA(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}
//-------------------------------------------------------------------------------------------------
lacksDMA::lacksDMA(const char* c, const baseDMA& rs)
	: abcDMA(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = ' \0 ';
}
//-------------------------------------------------------------------------------------------------
std::ostream& operator<< (std::ostream& os, const lacksDMA& Is)
{
	os << (const baseDMA&)Is;
	os << "Color: " << Is.color << std::endl; // цвет 
	return os;
}
void lacksDMA::View()
{
	abcDMA::View();
	cout << "Color: " << color << endl;
}
//-------------------------------------------------------------------------------------------------
// Методы hasDMA 
hasDMA::hasDMA(const char* s, const char* l, int r)
	: abcDMA(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
//-------------------------------------------------------------------------------------------------
hasDMA::hasDMA(const char* s, const baseDMA& rs)
	: abcDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
//-------------------------------------------------------------------------------------------------
hasDMA::hasDMA(const hasDMA& hs)
	: abcDMA(hs) // вызывает конструктор копирования базового класса 
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
//-------------------------------------------------------------------------------------------------
hasDMA::~hasDMA()
{
	delete[] style;
}
//-------------------------------------------------------------------------------------------------
hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs)
		return *this;
	abcDMA::operator=(hs); // копирование базовой части 
	delete[] style; // подготовка к операции new для style 
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}
//-------------------------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	os << (const baseDMA&)hs;
	os << "Style: " << hs.style << std::endl; // стиль 
	return os;
}
void hasDMA::View()
{
	abcDMA::View();
	cout << "Style: " << style << std::endl;
}