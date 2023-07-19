#include "Header.h"
#include<iostream>
namespace SALES {

	void setSales(Sales& s, const double ar[], int n) {
		s.max = ar[0];
		s.min = ar[0];
		int total = 0;
		for (int i = 0; i < n; i++) {

			if (ar[i] > s.max) {
				s.max = ar[i];

			}
			if (ar[i] < s.min) {
				s.min = ar[i];
			}
			total += ar[i];
			s.average = total / 4;
		}


	}
	void setSales(Sales& s) {
		double total = 0;
		s.max = s.sales[0];
		s.min = s.sales[0];
		for (int i = 0; i < 4; i++) {

			if (s.sales[i] > s.max) {
				s.max = s.sales[i];

			}
			if (s.sales[i] < s.min) {
				s.min = s.sales[i];
			}
			total += s.sales[i];
			s.average = total / 4;
		}

		cout << total << endl;
	}
	void showSales(const Sales& s) {

		for (int i = 0; i < 4; i++) {
			cout << s.sales[i];

		}
		cout << endl;
		cout << "aver: " << s.average << endl;
		cout << "max: " << s.max << " min: " << s.min << endl;


	}
}

