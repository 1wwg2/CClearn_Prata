#include "Header.h"
#include<iostream>
using namespace std;
int main() {
	using namespace SALES;
	double arr[QUATRES] = { 1, 2, 3 , 4 };
	Sales sall(arr, QUATRES);
	sall.setSales();
	sall.showSales(4);
	return 0;
}


