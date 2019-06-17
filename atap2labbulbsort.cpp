#include <iostream>

using namespace std;

int main()
{
	int *arr; // вказівник для виділення пам'яті під масив
	int size; // розмір масиву

	cin >> size; 

	if (size <= 0) // розмір масиву має бути => 0
	{
		return 1;
	}

	arr = new int[size]; // виділення пам'яті під масив


	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i]; //заповнення масиву
	}

	int temp; // тимчасова змінна для обміну чисел місцями
	
	for (int i = 0; i < size - 1; i++) // цикл сортування
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				// обмін місцями
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " "; // вивід відсортованого масиву
	}
	cout << endl;

	delete[] arr; // звільнення пам'яті;

	return 0;
}