#include "Header.h"

vector<string> FriendSort(ifstream& Fin);
int main()
{
	char ch;
	string str;
	ifstream Fin, Fin1;
	ofstream Fout;
	vector<string>MatFr, PatFr;
	Fin.open("tin.txt");
	Fin1.open("tin1.txt");
	Fout.open("result.txt");
	if (!Fout.is_open())
	{
		cout << "[-] BAD";
		exit(EXIT_FAILURE);
	}
	MatFr = FriendSort(Fin);
	PatFr = FriendSort(Fin1);

	vector<string>Final(PatFr.size() + MatFr.size());
	merge(PatFr.begin(), PatFr.end(), MatFr.begin(), MatFr.end(), Final.begin());
	Final.erase(unique(Final.begin(), Final.end()), Final.end());

	for (auto& t : Final)
	{
		Fout << t << endl;
	}

	Fin.close();
	Fin1.close();
	Fout.close();
	return 0;
}

vector<string> FriendSort(ifstream& Fin)
{
	string str;
	vector<string>temp;

	if (!Fin.is_open())
	{
		cout << "[-] BAD";
		exit(EXIT_FAILURE);
	}
	while (getline(Fin, str))
	{
		temp.push_back(str);
	}
	sort(temp.begin(), temp.end());
	return temp;
}

