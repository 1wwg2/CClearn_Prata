#include "Header.h"

int main()
{
	srand(time(0)); 
	vector<int>vi0(10000000);   // инициализируем первый вектор большим значением
	for (auto& num : vi0)
	{
		num = rand() % 100 + 1; // заполняем рандомным значением каждую ячейку от 1 до 100
	}

	vector<int> vi(vi0);        // инициализируем вектор 1 неотсортированными значениями вектора 0
	clock_t start = clock();    // устанавливаем метку времени(секундомер)
	sort(vi.begin(), vi.end()); // сортируем вектор методом
	clock_t end = clock();
	cout << "============" << (double)(end - start) / CLOCKS_PER_SEC << "=========sort vectror====="; // получаем время сортировки
	cout << endl;
	cout << "===================================================================" << endl;

	list<int>li;
	li.insert(li.begin(), vi.begin(), vi.end()); 
	start = clock();
	li.sort();				// сортировка листа (намного дольше выполняется)
	end = clock();
	cout << "============" << (double)(end - start) / CLOCKS_PER_SEC << "======sort list========";
	cout << endl;
	cout << "Unsorted" << endl;
	copy(vi0.begin(), vi0.end(), li.begin());    // проделываем эксперимент с копированием листа в массив, сортировка массива и копирование в вектор
	start = clock();
	copy(li.begin(), li.end(), vi.begin());

	sort(vi.begin(), vi.end());

	copy(vi.begin(), vi.end(), li.begin());
	end = clock();          // тесты показали, что этот метод еще медленнее сортировки листа
	cout << "============" << (double)(end - start) / CLOCKS_PER_SEC << "======copy list to vector, sort and after copy to list========";
	return 0;
}



