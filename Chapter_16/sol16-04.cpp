#include "Header.h"
#include <iostream>
#include<algorithm>
#include <vector>
#include <iterator>
int reduce(long ar[], int n);

int main()
{
	long array[] = { 12, 34, 56 ,64, 43, 34, 92 };
	cout << reduce(array, 7);
	return 0;
}


int reduce(long ar[], int n)
{
	vector<long>varr(n);
	copy(ar, ar + 7, varr.begin());
	sort(varr.begin(), varr.end());
	for (auto i : varr)
	{
		cout << i << " ";
	}
	cout << endl;
	varr.erase(unique(varr.begin(), varr.end()));
	for (auto i : varr)
	{
		cout << i << " ";
	}
	cout << endl;
	return varr.size();
}