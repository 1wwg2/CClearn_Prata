#include <iostream>
using namespace std;
double Garmonik(int a, int b);
int main() {
	int a, b;
	do {
		cout << "Enter a , b: ";
		if (!(cin >> a >> b)) {
			cout << "Err!" << endl;
			break;
		};
		cout << "Harmonik median: " << Garmonik(a, b) << endl;

	} while (a != 0 && b != 0);

	cout << "End program";
	return 0;
}

double Garmonik(int a, int b) {

	return 2.0 * a * b / (a + b);
}
