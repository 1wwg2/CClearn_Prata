#include <iostream>
double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double  total, choices;

	cout << "the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{

		cout << "You  have one chance  in   ";
		cout << probability(total, choices);
		cout << " of winning . \n";
		cout << "Next two numbers (q to quit) : ";

		cout << "bye\n";
		return 0;
	}
}
double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned ð;
	for (n = numbers, ð = picks; ð > 0; n--, ð--) result = result * n / ð;
	return result;
}
