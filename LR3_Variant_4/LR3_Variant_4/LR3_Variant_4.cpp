#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x = 0, a = 0, b = 0, h = 0, n = 0, sx = 0, yx = 0;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input h: ";
	cin >> h;
	cout << "Input n: ";
	cin >> n;
	x = a;
	while (x <= b)
	{
		double fi = 1;
		sx = 1;
		for (int i = 1; i < n; i++)
		{
			fi *= -x*x/(2*i*(2*i-1));
			sx += fi;			
		}
		yx = cos(x);
		cout << "x = " << x << "\t S(x) = " << sx << "\t Y(x) = " << yx << "\t|Y(x) - X(x)| = " << abs(yx - sx) << endl;
		x += h;
	}
	system("pause");
}
