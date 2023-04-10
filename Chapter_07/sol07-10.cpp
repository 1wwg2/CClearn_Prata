#include <iostream>
double calculate(double a, double b, double (*p)(double, double));
double add(double x, double y);
double mul(double x, double y);
double del(double x, double y);
using namespace std;
int main() {

	double(*p[3])(double x, double y) = { add, mul, del };
	double a, b;
	while (cin >> a >> b) {
		for (int i = 0; i < 3; i++) {
			cout << calculate(a, b, (*p[i])) << endl;;
		}
	}
	return 0;
}

double calculate(double a, double b, double (*p)(double, double)) {
	return (*p)(a, b);
}

double add(double x, double y) {
	return x + y;
}

double mul(double x, double y) {
	return x * y;
}

double del(double x, double y) {
	return x - y;
}
