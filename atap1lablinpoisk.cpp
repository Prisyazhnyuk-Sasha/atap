// Лінійний пошук

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int *array, rm, num = 0, k;

	cout << "Введiть розмiр масиву: " << endl;

	cin >> rm; // ввести розмір масива

	array = new int[rm];

	cout << "Введiть елементи масиву: " << endl;

	for (int i = 0; i < rm; i++)
	{
		cin >> array[i]; // ввести елементи масиву
	}

	cout << endl;

	cin >> k; // ввести цифру, що шукається

	for (int i = 0; i < rm; i++)
	{
		if (array[i] == k)
		{
			num++;
		}
	}
	cout << num << endl;

	return 0;
}