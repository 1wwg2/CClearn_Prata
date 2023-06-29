#include "Header.h"

int main()
{
	srand(time(0)); 
	vector<int>vi0(10000000);   // �������������� ������ ������ ������� ���������
	for (auto& num : vi0)
	{
		num = rand() % 100 + 1; // ��������� ��������� ��������� ������ ������ �� 1 �� 100
	}

	vector<int> vi(vi0);        // �������������� ������ 1 ������������������ ���������� ������� 0
	clock_t start = clock();    // ������������� ����� �������(����������)
	sort(vi.begin(), vi.end()); // ��������� ������ �������
	clock_t end = clock();
	cout << "============" << (double)(end - start) / CLOCKS_PER_SEC << "=========sort vectror====="; // �������� ����� ����������
	cout << endl;
	cout << "===================================================================" << endl;

	list<int>li;
	li.insert(li.begin(), vi.begin(), vi.end()); 
	start = clock();
	li.sort();				// ���������� ����� (������� ������ �����������)
	end = clock();
	cout << "============" << (double)(end - start) / CLOCKS_PER_SEC << "======sort list========";
	cout << endl;
	cout << "Unsorted" << endl;
	copy(vi0.begin(), vi0.end(), li.begin());    // ����������� ����������� � ������������ ����� � ������, ���������� ������� � ����������� � ������
	start = clock();
	copy(li.begin(), li.end(), vi.begin());

	sort(vi.begin(), vi.end());

	copy(vi.begin(), vi.end(), li.begin());
	end = clock();          // ����� ��������, ��� ���� ����� ��� ��������� ���������� �����
	cout << "============" << (double)(end - start) / CLOCKS_PER_SEC << "======copy list to vector, sort and after copy to list========";
	return 0;
}



