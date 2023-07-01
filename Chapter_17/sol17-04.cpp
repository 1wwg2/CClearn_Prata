#include "Header.h"


int main()
{
	char ch;
	string str, str2;
	ifstream Fin, Fin1;
	ofstream Fout;
	Fin.open("tin.txt");
	Fin1.open("tin1.txt");
	Fout.open("result.txt");
	if (!Fin.is_open() || !Fin1.is_open() || !Fout.is_open())
	{
		cout << "[-] BAD";
		exit(EXIT_FAILURE);
	}
	while (Fin.get(ch) && ch != '\n')
	{
		Fout.put(ch);
	}
	Fout.put(' ');
	while (Fin1.get(ch) && ch != '\n')
	{
		Fout.put(ch);
	}
	Fout.put('\n');
	while (Fin.get(ch) && ch != '\n')
	{
		Fout.put(ch);
	}
	Fout.put(' ');
	while (Fin1.get(ch) && ch != '\n')
	{
		Fout.put(ch);
	}
	Fout.put('\n');
	while (Fin.get(ch) && ch != '\n')
	{
		Fout.put(ch);
	}
	Fin.close();
	Fin1.close();
	Fout.close();
	return 0;
}



