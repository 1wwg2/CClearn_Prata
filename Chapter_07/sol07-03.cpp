#include <iostream>
using namespace std;
struct box {
	string marker;
	float height;
	float width;
	float lenght;
	float volume;
}box1;
void PrintPointer(box* n);
void print(box n);

int main() {
	box1 = { "aaaaa", 12,3,4,4.2 };
	box* Pointbox = &box1;
	print(box1);
	PrintPointer(Pointbox);

	return 0;
}

void print(box n) {
	n.marker = "sqqqssssssss";
	cout << n.marker << endl;
	cout << n.height << endl;
	cout << n.width << endl;
	cout << n.lenght << endl;
	cout << n.volume << endl;

}

void PrintPointer(box* n) {

	cout << n->marker << endl;
	cout << n->height << endl;
	cout << n->width << endl;
	cout << n->lenght << endl;
	cout << n->volume << endl;


}