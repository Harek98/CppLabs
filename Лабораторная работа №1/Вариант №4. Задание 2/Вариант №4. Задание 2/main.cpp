#include <iostream>
using namespace std;
void main()
{
	double a, b, c;
	cout << "Enter a, a!=0" << endl;
	cin >> a;
	if (a == 0)
		cout << "Error: a=0" << endl;
	else
	{
		cout << "Enter b" << endl;
		cin >> b;
		cout << "Enter c" << endl;
		cin >> c;
		double D = (b * b) - (4 * (a * c));
		if (D < 0)
			cout << "No roots" << endl;
		else
		{
			double X1 = (-b + sqrt(D)) / (2 * a);
			double X2 = (-b - sqrt(D)) / (2 * a);
			if (X1 == X2)
				cout << "X =" << X1 << endl;
			else
				cout << "X1 =" << X1 << endl;
	            cout << "X2 =" << X2 << endl;
		}
	}
	system("pause");
}