#include "Header.h"
int main() {

	BankAcc num1("Yuri Gabis", "12345689", 2050.32);
	num1.PrintAcc();
	num1.AddMoney(50.3);
	num1.PrintAcc();
	num1.DelMoney(62.34);
	num1.PrintAcc();

	return 0;
}