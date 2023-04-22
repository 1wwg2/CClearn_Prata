#include <iostream>
#include <string>
using namespace std;
int call = 0;
void strShow(const char* p, int c = 0);

int main() {
	char str[] = "Hello World";
	strShow(str);
	strShow(str);
	strShow(str, 1);

	return 0;
}


void strShow(const char* p, int c) {

	cout << p << endl;
	if (c != 0) {
		c = call;
		for (int i = 1; i < c; i++) {
			cout << p << endl;
		}
	}
	call++;
}
