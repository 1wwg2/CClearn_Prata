#include "Header.h"
#include<iostream>
using namespace std;
const int SIZE = 4;

int main() {
	using namespace SALES;
	SALES::Sales sall;

	double arr[SIZE] = { 4, 4, 4 , 4 };
	setSales(sall, arr, SIZE);
	setSales(sall);
	showSales(sall);
	return 0;
}

