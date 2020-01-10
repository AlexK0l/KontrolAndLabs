#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int arr[30], n = 0, minindex = -2, maxindex = -1, t = 0, sum = 0;
	cout << "Input n(<=30): ";
	cin >> n;
	if (n > 30)
	{
		cout << "Invalid n";
		return 1;
	}
	else
	{
		maxindex = n;
		cout << "Select type of filling:" << endl;
		cout << "1. From the keyboard" << endl;
		cout << "2. Random" << endl;
		cin >> t;
		switch (t)
		{
		case 1:
			for (int i = 0; i < n; i++)
			{
				cout << "Input arr[" << i << "]" << endl;
				cin >> arr[i];
			}
			break;
		case 2:
			srand(time(NULL));
			for (int i = 0; i < n; i++)
				arr[i] = rand() % 31 - 20;
			break;
		default:
			cout << "Invalid type";
			return 1;
		}
		cout << "Array:" << endl;
		for (int i = 0; i < n; i++)
			cout << arr[i] << "\t";
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > 0)
			{
				minindex = i;
				break;
			}
		}
		if (minindex < 0)
		{
			cout << "No positive numbers";
			return 0;
		}
		else
		{
			for (int i = n - 1; i > minindex; i--)
			{
				if (arr[i] > 0)
				{
					maxindex = i;
					break;

				}
			}
			if (maxindex < 0)
			{
				cout << "Here is only one positive number";
				return 0;
			}
			else if (maxindex - minindex == 1)
			{
				cout << "First and last positive numbers are neighbors";
				return 0;
			}
			else
			{
				for (int i = minindex + 1; i < maxindex; i++)
					sum += arr[i];
			}
			cout << "\nSum = " << sum << endl;
		}
	}
	system("pause");
}