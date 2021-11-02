// Source.cpp
// Капанайко Арсен
// Варіант 9
// Лабораторна робота №6.1(1)
// 
#include <iostream>
#include <iomanip>
using namespace std;

void CreateArr(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
		arr[i] = -25 + rand() % 106;
}

void WriteArr(int arr[], const int size)
{
	cout << "{";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
	}
	cout << "}" << endl;
}

int SumElementsArr(const int* const arr, const int size)
{
	int S = 0;
	for (size_t i = 0; i < size; i++)
		if (arr[i] < 0 || arr[i] % 2 == 0)
			S += arr[i];
	return S;
}

int CountingElementArr(const int* const arr, const int size)
{
	int C = 0;
	for (size_t i = 0; i < size; i++)
		if (arr[i] < 0 || arr[i] % 2 == 0)
			C++;
	return C;
}

void ReplacingElementsArr(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0 || arr[i] % 2 == 0)
			arr[i] = 0;
	}
}

int main()
{
	srand(time(0));

	const int size = 23;
	int Arr[size];

	CreateArr(Arr, size);
	WriteArr(Arr, size);
	cout << "Array sum by condition = " << SumElementsArr(Arr, size) << endl;
	cout << "Count element by condition = " << CountingElementArr(Arr, size) << endl;
	ReplacingElementsArr(Arr, size);
	WriteArr(Arr, size);

	return 0;
}