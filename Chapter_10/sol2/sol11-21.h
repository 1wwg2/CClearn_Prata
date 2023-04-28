#include <iostream>
using namespace std;

class Person
{
public:
	enum { LIMIT = 25 };
private:
	char fname[LIMIT];
	string lname;
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const string& ln, const char* fn = "Heyyou");
	void Show() const;
	void FormalShow() const;


};

