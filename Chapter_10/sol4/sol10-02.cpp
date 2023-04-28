#include "Header.h"
#include <iostream>

namespace SALES {

	Sales::Sales(const double ar[], int n) {
		for (int i = 0; i < n; i++) {
			sales[i] = ar[i];
		}
		average = max = min = 0;
		max = ar[0];
		min = ar[0];
		int total = 0;
		for (int i = 0; i < n; i++) {
			if (ar[i] > max) {
				max = ar[i];
			}
			if (ar[i] < min) {
				min = ar[i];
			}
			total += ar[i];
			average = total / 4;
		}

		cout << total << endl;

	}
	void Sales::setSales() {
		double arr[QUATRES]{};
		for (int i = 0; i < QUATRES; i++) {
			cout << "Enter " << i + 1 << ": ";
			cin >> arr[i];
		}
		Sales s1(arr, QUATRES);
		*this = s1;
	}
	void Sales::showSales(int n) const {

		for (int i = 0; i < n; i++) {
			cout << sales[i];
		}
		cout << endl;
		cout << "aver: " << average << endl;
		cout << "max: " << max << " min: " << min << endl;

	}
}


