#include "Header.h"

vector<string> Name(int size);
int main()
{

	int FriendsNum = 0;
	cout << "Met, Input how many friends go on  party? : ";
	cin >> FriendsNum;
	cin.ignore();
	vector<string>NameMet = Name(FriendsNum);

	cout << "Pet, Input how many friends go on  party? : ";
	cin >> FriendsNum;
	cin.ignore();
	vector<string>NamePet = Name(FriendsNum);

	vector<string>Final(NamePet.size() + NameMet.size());
	merge(NamePet.begin(), NamePet.end(), NameMet.begin(), NameMet.end(), Final.begin());
	sort(Final.begin(), Final.end());
	Final.erase(unique(Final.begin(), Final.end()), Final.end());


	for (const auto& list : Final)
	{
		cout << list << " ";
	}

	cout << endl;

	return 0;
}


vector<string> Name(int size)
{
	int j = 0;
	vector<string>Name(size);
	for (auto i = Name.begin(); i != Name.end(); i++, j++)
	{
		cout << "Enter " << j + 1 << " Name: ";
		getline(cin, *i);

	}
	sort(Name.begin(), Name.end());

	return Name;
}


