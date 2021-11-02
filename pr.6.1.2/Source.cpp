//Lab 6.1.2
//Капанайко Арсен
//Варіант 9

#include <iostream>
using namespace std;

void CreateArr(int arr[], const int size, int i)
{
	if (i < size)
	{
		arr[i] = -25 + rand() % 106;
		CreateArr(arr, size, i + 1);
		return;
	}
}

int SumElementsArr(const int* const arr, const int size, int i)
{
	if (i < size)
	{
		if (arr[i] < 0 || arr[i] % 2 == 0)
			return arr[i] + SumElementsArr(arr, size, i + 1);
		else
			return SumElementsArr(arr, size, i + 1);
	}
	else return 0;
}

int CountingElementArr(int const* const arr, const int size, int i)
{
	if (i < size)
	{
		if (arr[i] < 0 || arr[i] % 2 == 0)
			return 1 + CountingElementArr(arr, size, i + 1);
		else
			return  CountingElementArr(arr, size, i + 1);
	}
	else return 0;
}

void WriteArr(int arr[], const int size, int i)
{
	if (i < size)
	{
		if (i == 0)
			cout << "{";
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		WriteArr(arr, size, i + 1);
		return;
	}
}

void ReplacingElementsArr(int arr[], const int size, int i)
{
	if (i < size)
	{
		if (arr[i] < 0 || arr[i] % 2 == 0)
			arr[i] = 0;
		ReplacingElementsArr(arr, size, i + 1);
		return;
	}
}

int main()
{
	srand(time(0));
	const int size = 23;
	int arr[size];

	CreateArr(arr, size, 0);
	WriteArr(arr, size, 0);
	cout << "Array sum by condition = " << SumElementsArr(arr, size, 0) << endl;
	cout << "Count element by condition = " << CountingElementArr(arr, size, 0) << endl;
	ReplacingElementsArr(arr, size, 0);
	WriteArr(arr, size, 0);

	return 0;
}