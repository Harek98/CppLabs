#include <iostream>
#define PI 3.14159265
using namespace std;
void main()
{
	int x, y, z;
	double a, b;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	cout << "Enter z" << endl;
	cin >> z;
	a = ((2 * cos(x - (PI / 4)))) / (1 / 2 * (sin(y))) + acos(x + PI / 2);
	b = 1 + ((z * z) / (3 + ((z * z) / 5)));
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
}