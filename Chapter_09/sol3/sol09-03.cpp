#include<iostream>
using namespace std;
struct chaff {

	char dross[20];
	int slag;

};

int main() {
	char buffer[2 * sizeof(chaff)];
	chaff* buff;
	buff = new chaff[2];
	for (int i = 0; i < 2; i++) {
		strcpy_s(buff[i].dross, "1111");
		buff[i].slag = i;
		cout << buff[i].dross << " " << buff[i].slag << endl;
	}
	chaff* buff2 = new (buffer) chaff[2];
	for (int i = 0; i < 2; i++) {
		strcpy_s(buff2[i].dross, "2222");
		buff2[i].slag = i;
		cout << buff2[i].dross << " " << buff2[i].slag << endl;
	}
	delete[] buff;
	delete[] buff2;
	return 0;
}

