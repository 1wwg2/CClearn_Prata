#include "Header.h"

int main() {
	Move s1(1, 8);
	Move s2(2, 3);
	s1.shovmove();
	s2.shovmove();
	Move s3 = s1.add(s2);
	s3.shovmove();
	s3.reset();
	s3.shovmove();

	return 0;
}
