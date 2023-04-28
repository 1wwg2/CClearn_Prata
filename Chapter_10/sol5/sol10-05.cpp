#include "Header.h"
#include <iostream>

Move::Move(double a, double b) {
	x = a;
	y = b;

}
void Move::shovmove() const {

	cout << x << " " << y << endl;
}
Move Move::add(const Move& m) const
{
	return Move(x + m.x, y + m.y);
}

void Move::reset(double a, double b) {
	x = a;
	y = b;

}
