#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib> 
#include <string>
#include <valarray>
using namespace std;
using ArrayInt = valarray<int>;
using PairArray = pair<ArrayInt, ArrayInt>;
class Wine
{
private:
	string obj;
	PairArray data;
	int years;
public:
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	~Wine();
	void GetBottles();
	const string& Label() const;
	int sum() const;
	void Show();
};