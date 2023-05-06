#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Cd {
private:
	char* perfomers;
	char* label;
	int selections;
	double playtime;
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& d);
};

class Classic : public Cd {
private:
	char* GeneralName;
public:
	Classic(const char* s0, const char* s1, const char* s2, int n, double x);
	Classic(const Classic& d);
	Classic();
	~Classic();
	virtual void Report() const;
	Classic& operator=(const Classic& d);

};

