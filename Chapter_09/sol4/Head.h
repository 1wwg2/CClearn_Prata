using namespace std;

namespace SALES {
	const int QUATRES = 4;

	struct Sales {
		double sales[QUATRES] = { 1 , 2 ,3 ,4 }, average = 0, max = 0, min = 0;
	};

	void setSales(Sales& s, const double ar[], int n);
	void setSales(Sales& s);
	void showSales(const Sales& s);
}











