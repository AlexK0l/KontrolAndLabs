#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x = 0, a = 0, b = 0, z = 0, y = 0;
	char f;
	double fx;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input z: ";
	cin >> z;
	if (z < 1)
	{
		cout << "x = z^3 + 0.2\n";
		x = pow(z, 3) + 0.2;
	}
	else
	{
		cout << "x = z + ln(z)";
		x = z + log(z);
	}
	cout << "\nSelect function:" << endl;
	cout << "1. 2x" << endl;
	cout << "2. x^2" << endl;
	cout << "3. x/3" << endl;
	cin >> f;
	switch (f)
	{
	case 1:
		cout << "f(x) = 2x\n";
		fx = 2 * x;
		break;
	case 2:
		cout << "f(x) = x^2\n";
		fx= pow(x, 2);
		break;
	case 3:
		cout << "f(x) = x/3\n";
		fx=x / 3.0;
		break;
	default:
		cout << "Invalid input";
		return 1;
	}
	y = 2 * a * pow(cos(pow(x, 2)), 3) + pow(sin(pow(x, 3)), 2) - b*fx;
	cout << "y = " << y << endl;
	system("pause");
}
