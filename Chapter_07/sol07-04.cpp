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
	unsigned �;
	for (n = numbers, � = picks; � > 0; n--, �--) result = result * n / �;
	return result;
}
