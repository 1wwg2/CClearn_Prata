#include "Header.h"


abstr_emp::abstr_emp()
{
	fname = "NoFirstName";
	lname = "NoSecondName";
	job = "NoWork";
}
abstr_emp::abstr_emp(const std::string& fn, const std::string& In, const std::string& j) : fname(fn), lname(In), job(j) {}


void abstr_emp::ShowAll() const
{
	cout << "fname = " << fname << " lname = " << lname
		<< " job = " << job << endl;
}// выводит все данные с именами 
void abstr_emp::SetAll()
{
	cout << "Enter fname: ";
	cin >> fname;
	cout << "Enter lname: ";
	cin >> lname;
	cout << "Enter job: ";
	cin >> job;

}// запрашивает значения у пользователя 
ostream& operator << (std::ostream& os, const abstr_emp& e)
{
	os << "fname = " << e.fname << " lname = " << e.lname
		<< " job = " << e.job << endl;
	return os;
}
//--------------------------------------------------------------------------------------------------------------------
employee::employee() : abstr_emp() {}

employee::employee(const std::string& fn, const std::string& In, const std::string& j) : abstr_emp(fn, In, j) {}

void employee::ShowAll() const
{
	cout << "status employee" << endl;
	abstr_emp::ShowAll();
}
void employee::SetAll()
{
	abstr_emp::SetAll();
}
abstr_emp::~abstr_emp() {}

//--------------------------------------------------------------------------------------------------------------------
manager::manager() : abstr_emp()
{
	inchargeof = 0;
}
manager::manager(const std::string& fn, const std::string& In, const std::string& j, int ico) : abstr_emp(fn, In, j), inchargeof(0) {}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager& m) : abstr_emp(m)
{
	inchargeof = m.inchargeof;
}
void manager::ShowAll() const
{
	cout << "status manager" << endl;
	abstr_emp::ShowAll();
	cout << "in charge of" << inchargeof << endl;
}
void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter in charge of: " << endl;
	cin >> inchargeof;
}

//--------------------------------------------------------------------------------------------------------------------

fink::fink() : abstr_emp(), reportsto("Norep") {}
fink::fink(const std::string& fn, const std::string& In, const std::string& j, const std::string& rpo) :
	abstr_emp(fn, In, j), reportsto(rpo) {}

fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink& e) : abstr_emp(e)
{
	reportsto = e.reportsto;
}

void fink::ShowAll() const
{
	cout << "status fink" << endl;
	abstr_emp::ShowAll();
	cout << "reportsto =  " << reportsto << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter reportsto: " << endl;
	cin >> reportsto;
}

//--------------------------------------------------------------------------------------------------------------------

highfink::highfink() : abstr_emp(), manager(), fink() {}

highfink::highfink(const std::string& fn, const std::string& In, const std::string& j, const std::string& rpo, int ico) :
	abstr_emp(fn, In, j), manager(fn, In, j, ico), fink(fn, In, j, rpo) {}
highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo) {}
highfink::highfink(const fink& f, int ico) : abstr_emp(f), fink(f), manager(f, ico) {}
highfink::highfink(const manager& m, const std::string& rpo) : abstr_emp(m), fink(m, rpo), manager(m) {}
highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "in charge of =  " << manager::InChargeOf() << endl;
	cout << "reportsto =  " << fink::ReportsTo() << endl;
}
void highfink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter reportsto: " << endl;
	cin >> ReportsTo();
	cin.get();
	cout << "Enter in charge of: " << endl;
	cin >> InChargeOf();
}