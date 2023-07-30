#include "Header.h"
#include <iostream>
#include <cstring>


int main()
{
	Complex a(3.0, 4.0); // инициализация значением (3,4і) 
	Complex c;

	std::cout << "Enter a complex number (q to quit) :\n";
	// Ввод комплексного числа (q для завершения)

	while (std::cin >> c)
	{
		std::cout << "c is (" << c << "i)" << '\n'; // значение с 
		std::cout << "complex conjugate is (" << ~c << "i)" << '\n';
		// значение сопряженного числа 

		std::cout << "a is (" << a << ")" << '\n';
		std::cout << "a + c is (" << a + c << "i)" << '\n'; // значение а + с 
		std::cout << "a - c is (" << a - c << "i)" << '\n'; // значение а — с 
		std::cout << "a * c is (" << a * c << "i)" << '\n'; // значение а * с 
		std::cout << "2 * c is (" << 2 * c << "i)" << '\n'; // значение 2 * с 
		std::cout << "Enter a complex number (q to quit) :\n";
	}
	std::cout << "Done!\n";
	return 0;
}

