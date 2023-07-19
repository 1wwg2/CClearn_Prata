#include "Header.h"


int main()
{
	Stack st;
	char ch;
	customer w;
	double subtotal = 0.0;
	cout << "Enter Q to exit, enter any to start: ";
	while (cin >> ch && ch != 'Q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		cout << "Enter name of worker: ";
		cin.getline(w.fullname, 35);
		cout << "Enter payment to worker: ";
		(cin >> w.payment).get();
		if (st.isfull())
		{
			cout << "Full";
			break;
		}
		else
		{
			st.push(w);
		}
		if (st.isempty())
		{
			cout << "Empty";
		}
		else
		{
			char ch1;
			cout << "POP? Y/N: ";
			cin >> ch1;
			if (toupper(ch1) == 'Y' || ch == 'P')
			{
				subtotal += w.payment;
				st.pop(w);
				std::cout << "Client " << w.fullname << " was deleted\n";
				continue;
			}
			else
			{
				cout << "Enter Q to exit, enter any to start: ";
				continue;
			}
		}
	}


	return 0;
}

