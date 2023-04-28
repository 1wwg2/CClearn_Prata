#include <iostream>

using namespace std;

namespace SALES {
	const int QUATRES = 4;
	class Sales {

	private:

		double sales[QUATRES], average, max, min;
	public:
		void setSales();
		Sales(const double ar[], int n);
		void showSales(int n) const;

	};





}




