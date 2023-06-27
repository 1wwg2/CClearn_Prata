#include "Header.h"

template<typename T>
int reduce(T ar[], int n);

int main()
{
	long array[] = { 12, 34, 56 ,64, 43, 34, 92 };
	string strarray[] = { "zebra", "abbbra", "gebraa", "bebra", "ff" , "ff" };
	cout << reduce(strarray, 6);
	cout << reduce(array, 7);
	return 0;
}

template<typename T>
int reduce(T ar[], int n)
{
	vector<T>varr(n);
	copy(ar, ar + n, varr.begin());
	sort(varr.begin(), varr.end());
	cout << endl;
	for (auto i : varr)
	{
		cout << i << " ";
	}
	cout << endl;
	varr.erase(unique(varr.begin(), varr.end()), varr.end());
	cout << endl;
	for (auto i : varr)
	{
		cout << i << " ";
	}
	cout << endl;
	return varr.size();
}