#include "Header.h"

vector<int> Lotto(int spots, int selected);
int main()
{
	cout << "Enter the number of spots on the lottery card: ";
	int spots = 0;
	cin >> spots;

	cout << "Enter the number of spots to be selected: ";
	int selected = 0;
	cin >> selected;

	vector<int> result = Lotto(spots, selected);
	cout << "Your lucky numbers are: ";

	for (int i = 0; (unsigned)i < result.size(); i++)
	{
		std::cout << result[i] << " ";
	}
	cout << std::endl;

	return 0;
}

std::vector<int> Lotto(int spots, int selected)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, spots);
	if (spots < selected)
	{
		std::cout << "The second argument of Lotto() must be less than ";
		std::cout << "the first argument." << std::endl;
		std::cout << "Program abort" << std::endl;
		exit(EXIT_FAILURE);
	}

	if (spots < 0 || selected < 0)
	{
		std::cout << "Both arguments of Lotto() must be positive integers";
		std::cout << std::endl;
		std::cout << "Program abort" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::vector<int> v;
	for (int i = 1; i < spots + 1; i++)
	{
		v.push_back(i);
	}

	shuffle(v.begin(), v.end(), gen);

	std::vector<int> picks;
	for (int i = 0; i < selected; i++)
	{
		picks.push_back(v[i]);
	}
	return picks;
}