#include "Header.h"
Cow::Cow() {
	hobby = new char[1];
	name[0] = '\0';
	hobby[0] = '\0';
	weight = 0.0;
	cout << "default";

}

Cow::Cow(const char* nm, const char* ho, double wt) {
	hobby = new char[strlen(ho) + 1];
	strcpy(name, nm);
	strcpy(hobby, ho);
	weight = wt;

}
Cow::Cow(const Cow& c) {

	hobby = new char[strlen(c.hobby) + 1];
	weight = c.weight;
	strcpy(name, c.name);
	strcpy(hobby, c.hobby);

}
Cow::~Cow() {
	delete[] hobby;
}
Cow& Cow::operator=(const Cow& c) {
	weight = c.weight;
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	return *this;
}
void Cow::ShowCow() const {
	cout << hobby << " " << name << " " << weight << endl;
}
