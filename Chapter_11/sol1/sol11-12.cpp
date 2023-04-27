#include "Header.h"

BankAcc::BankAcc(string name = "No_Name", string accnum = "000_000_000", double bal = 0.0) {
	Name = name;
	AccNumbers = accnum;
	Balance = bal;
}

void BankAcc::PrintAcc() const {
	cout << AccNumbers << " " << Name << " " << Balance << endl;
}

double BankAcc::AddMoney(double Bal) {
	Balance += Bal;
	return Balance;
}
double BankAcc::DelMoney(double Bal) {
	Balance -= Bal;
	return Balance;
}