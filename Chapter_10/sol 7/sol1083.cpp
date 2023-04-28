#include "Header.h"
#include <iostream>

Plorg::Plorg(string name, int ci) {
	Name = name;
	CI = ci;

}
void Plorg::ShowPlorg() const {

	cout << CI << " " << Name << endl;
}