#include <iostream>
using namespace std;
class Move {
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void shovmove() const;
	Move add(const Move& m) const;
	void reset(double a = 0, double b = 0);



};





