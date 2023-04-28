#include <iostream>
using namespace std;

class BankAcc {
private:
	string Name;
	string AccNumbers;
	double Balance;
public:
	BankAcc(string name, string accnum, double bal);
	void PrintAcc() const;
	double AddMoney(double Bal);
	double DelMoney(double Bal);
};
