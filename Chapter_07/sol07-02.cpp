#include <iostream>
using namespace std;
const int SIZE = 10;
int avr, sum, c = 0;
int Enter(int arr[]);
void OutPut(int arr[]);
int Count(int arr[]);
int main() {
	int arr[SIZE]{};

	Enter(arr);

	Count(arr);
	OutPut(arr);

	return 0;
}

int Enter(int arr[]) {
	int Ent = 0;
	cout << "Enter 1 res, -res to end: ";

	for (int i = 0; i < SIZE, cin >> Ent; i++) {

		if (Ent < 0) {
			break;
		}
		c++;
		cout << "Enter " << i + 2 << " res: ";
		arr[i] = Ent;
		sum += Ent;

	}

	return 0;
}
int Count(int arr[]) {
	if (c <= 0) {
		exit(-1);
	}
	avr = sum / c;
	cout << "Medium : " << avr << endl;


	return 0;
}

void OutPut(int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > 0)
			cout << arr[i];
	}
}