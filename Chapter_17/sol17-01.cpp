#include "Header.h"


int main()
{
	char inp;
	fstream file;
	int count = 0;
	file.open("file.txt");
	if (!file.is_open() || file.peek() == std::ifstream::traits_type::eof())
	{
		cout << "[-] BAD!";
		exit(EXIT_FAILURE);
	}
	while (file.get(inp))
	{
		if (inp == '$')
		{
			break;
		}
		count++;
	}
	cout << "Characters per line: " << count;
	file.close();
	return 0;
}

