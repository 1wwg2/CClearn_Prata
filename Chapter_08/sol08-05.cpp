#include <iostream>
using namespace std;
template<typename T>
T MaxArr(T Size);
int main() {


	cout << MaxArr(5);

	return 0;
}



template<typename T>
T MaxArr(const T Size) {
	T* Arr = new T[Size], Max;

	for (int i = 0; i < Size; i++) {
		cin >> Arr[i];
	}
	Max = Arr[0];
	for (int i = 0; i < Size; i++) {
		if (Max < Arr[i]) {
			Max = Arr[i];
		}

	}
	return Max;
}