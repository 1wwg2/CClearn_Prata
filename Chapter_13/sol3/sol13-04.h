#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;


class abcDMA
{
private:
	char* label;
	int rating;
protected:
	const char* Lable() { return label; }
	int Rating() { return rating; }
public:
	abcDMA(const char* l = "null", int r = 0);
	abcDMA(const abcDMA& rs);
	virtual ~abcDMA() { delete[] label; }
	abcDMA& operator=(const abcDMA& rs);
	virtual void View() = 0;
	friend std::ostream& operator<<(std::ostream& os, const abcDMA& rs);

};
//-------------------------------------------------------------------------------------------------
// Базовый класс, использующий динамическое вьделение памяти 
class baseDMA : public abcDMA
{
private:

public:
	void View() override;
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};
//-------------------------------------------------------------------------------------------------
// Производный класс без динамического вьщеления памяти 
// Деструктор не нужен 
// Используется неявный конструктор копирования 
// Используется неявная операция присваивания 
class lacksDMA : public abcDMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	void View() override;
	lacksDMA(const char* с = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
};
//-------------------------------------------------------------------------------------------------
// Производный класс с динамическим выделением памяти 
class hasDMA : public abcDMA
{
private:
	char* style;
public:
	void View() override;
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
};