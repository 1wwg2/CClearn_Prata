#include <iostream>
#include <cstring>
using namespace std;
template<typename T>
T maxn(T arr[], const int size);

template<> const char* maxn(const char* arr[], const int count);
int main() {
	int Arr[] = { 1,2,3,4,5,6 };
	double Arr2[] = { 1.1,2.2,6.6,4.4 };
	const char* p[] = { "ssssss", "s", "s2", "2", "dddddd" };
	cout << maxn(Arr, 6) << endl;
	cout << maxn(Arr2, 4) << endl;

	cout << maxn(p, 4);
	return 0;
}


template<typename T>
T maxn(T arr[], const int size) {
	T Max = arr[0];
	for (int i = 0; i < size; i++) {
		if (Max < arr[i]) {
			Max = arr[i];
		}

	}
	return Max;
}


template<> const char* maxn(const char* arr[], const int count) {
	const char* str = arr[0];

	for (int i = 0; i < count; i++) {
		if (strlen(str) < strlen(arr[i])) {
			str = arr[i];
		}
	}
	return str;
}