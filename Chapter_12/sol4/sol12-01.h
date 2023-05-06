#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
typedef unsigned long Item;

class Stack {
private:
	enum { MAX = 10 };
	Item* pitems;
	int size;
	int top;
public:
	Stack(int n = 10);
	Stack(const Stack& st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	Stack& operator=(const Stack& st);
	void Stacks();
};
