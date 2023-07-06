#define _CRT_SECURE_NO_WARNINGS
#pragma execution_character_set("utf-16")
#include <iostream>
#include <cstdlib> 
#include <string>
#include <valarray>
#include "windows.h"
using namespace std;

class Person
{
private:
	string FirstName;
	string LastName;
public:
	Person(string F, string L) : FirstName(F), LastName(L) {}
	Person(const char* F, const char* L) : FirstName(F), LastName(L) {}
	void Show() const;
	virtual ~Person() = 0;
};


class Gunslinger : virtual public Person
{
private:
	int Notches;
	double TimeForShoot;
public:
	Gunslinger(string F, string L, int N, double TShoot) : Person(F, L), Notches(N), TimeForShoot(TShoot) {}
	double Draw() const { return TimeForShoot; }
	void Show() const;
};


class PokerPlayer : virtual public Person
{
protected:
	struct Card
	{
		string Name;
		string Suit;

	};
	Card card;
public:
	PokerPlayer(string F, string L) : Person(F, L) {}
	Card Draw();
	void Show() const;
};

class BadDude : public PokerPlayer, public Gunslinger
{
public:
	BadDude(string F, string L, int N, double TShoot) : Person(F, L), PokerPlayer(F, L), Gunslinger(F, L, N, TShoot) {}
	double Gdraw() const;
	Card CDraw();
	void Show() const;
};