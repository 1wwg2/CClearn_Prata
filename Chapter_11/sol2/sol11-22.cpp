#include "Header.h"
#include <iostream>
#include <cstring>

Person::Person(const std::string& ln, const char* fn)
{
    lname = ln;
    strncpy_s(fname, fn, LIMIT - 1);
    fname[LIMIT - 1] = '\0';
}
void Person::Show() const
{
    std::cout << "Name: " << lname << "\nfname: " << fname << std::endl;
}
void Person::FormalShow() const
{
    std::cout << "Formal name: " << fname << " " << lname << std::endl;
}