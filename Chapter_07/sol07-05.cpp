#include <iostream>
using namespace std;
int recus(int a);

int main()
{

	cout << recus(5);
	return 0;
}


int recus(int a) {

	if (a == 0 || a == 1) {
		return 1;
	}
	return  a * (recus(a - 1));
}