#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x = 0, y = 0, z = 0;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	double s = pow(abs(cos(x) - cos(y)), 1 + 2 * pow(sin(y),2)) * (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
	cout << s << endl;
	system("pause");
}
