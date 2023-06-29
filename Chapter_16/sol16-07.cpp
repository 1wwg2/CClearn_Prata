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
	vector<int>trying(spots);

	vector<int> result = Lotto(spots, selected);
	cout << "Your lucky numbers are: ";

	for (int i = 0; (unsigned)i < result.size(); i++)
	{
		std::cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}

std::vector<int> Lotto(int spots, int selected)
{
	std::random_device rd;
	std::mt19937 gen(rd());

	vector<int>temp(spots);
	for (int i = 0; i < spots; i++)
	{
		temp[i] = i + 1;
		cout << temp[i] << " ";
	}
	shuffle(temp.begin(), temp.end(), gen);
	temp.erase(temp.begin() + selected, temp.end());
	return temp;
}