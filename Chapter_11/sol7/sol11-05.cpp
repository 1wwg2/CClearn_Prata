#include "Header.h"
#include <iostream>
#include <cstring>


int main()
{
	Complex a(3.0, 4.0); // ������������� ��������� (3,4�) 
	Complex c;

	std::cout << "Enter a complex number (q to quit) :\n";
	// ���� ������������ ����� (q ��� ����������)

	while (std::cin >> c)
	{
		std::cout << "c is (" << c << "i)" << '\n'; // �������� � 
		std::cout << "complex conjugate is (" << ~c << "i)" << '\n';
		// �������� ������������ ����� 

		std::cout << "a is (" << a << ")" << '\n';
		std::cout << "a + c is (" << a + c << "i)" << '\n'; // �������� � + � 
		std::cout << "a - c is (" << a - c << "i)" << '\n'; // �������� � � � 
		std::cout << "a * c is (" << a * c << "i)" << '\n'; // �������� � * � 
		std::cout << "2 * c is (" << 2 * c << "i)" << '\n'; // �������� 2 * � 
		std::cout << "Enter a complex number (q to quit) :\n";
	}
	std::cout << "Done!\n";
	return 0;
}

