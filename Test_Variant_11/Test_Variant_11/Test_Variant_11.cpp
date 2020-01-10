#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;


int* fillArray(int arr[], int length, int a, int b)
{
	for (int i = 0; i < length; i++)
		arr[i] = rand() % b + a;
	return arr;
}


void printArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << "\t";
	cout << endl;
}


int findMaxElement(int arr[], int length, int maxelem, int maxelemindex)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > maxelem)
		{
			maxelem = arr[i];
			maxelemindex = i;
		}
	}
	return maxelemindex;
}


int findMinElement(int arr[], int length, int minelem, int minelemindex)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < minelem)
		{
			minelem = arr[i];
			minelemindex = i;
		}
	}
	return minelemindex;
}


int* dropOddElements(int arr[], int minind, int maxind, int length, int& newlength)
{
	int index = minind, ind = minind;
	while (ind < maxind)
	{
		if (arr[ind] % 2 == 0)
		{
			arr[index] = arr[ind];
			index++;
		}
		else
			newlength--;
		ind++;
	}
	while (ind < length)
	{
		arr[index] = arr[ind];
		ind++;
		index++;
	}
	return arr;
}


int main()
{
	int n, a, b, j, i = 0;
	cout << "Input n: ";
	cin >> n;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	int *arr = new int[n];
	srand(time(NULL));
	arr = fillArray(arr, n, a, b);
	cout << "Original array:" << endl;
	printArray(arr, n);
	int maxelemindex = findMaxElement(arr, n, arr[0], 0);
	int mineleindex = findMinElement(arr, n, arr[0], 0);
	arr = dropOddElements(arr, min(maxelemindex, mineleindex) + 1, max(maxelemindex, mineleindex), n, n);
	cout << "Changed array:" << endl;
	printArray(arr, n);
	delete[] arr;
	system("pause");
}