#include "Header.h"

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	perfomers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	strcpy(perfomers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d) {
	perfomers = new char[strlen(d.perfomers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(perfomers, d.perfomers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;

}
Cd::Cd() {
	perfomers = new char[1];
	label = new char[1];
	*perfomers = '\0';
	*label = '\0';
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd() {
	delete[] perfomers;
	delete[] label;
}
void Cd::Report() const {
	cout << perfomers << '\n' << label << '\n'
		<< selections << '\n' << playtime << '\n';
}
Cd& Cd::operator=(const Cd& d) {
	if (this == &d) {
		return *this;
	}
	delete[] perfomers;
	delete[] label;
	perfomers = new char[strlen(d.perfomers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(perfomers, d.perfomers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return*this;
}

Classic::Classic(const char* s0, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x) {
	GeneralName = new char[strlen(s0) + 1];
	strcpy(GeneralName, s0);
}

Classic::Classic(const Classic& d) : Cd(d) {
	GeneralName = new char[strlen(d.GeneralName) + 1];
	strcpy(GeneralName, d.GeneralName);
}
Classic::Classic() : Cd() {
	GeneralName = new char[1];
	GeneralName[0] = '\0';
}
Classic::~Classic() {
	delete[] GeneralName;
}
void Classic::Report() const {
	cout << " " << GeneralName << endl;
	Cd::Report();
}

Classic& Classic::operator=(const Classic& d) {
	if (this == &d) {
		return *this;
	}
	Cd::operator=(d);
	delete[] GeneralName;
	GeneralName = new char[strlen(d.GeneralName) + 1];
	strcpy(GeneralName, d.GeneralName);
	return*this;
}