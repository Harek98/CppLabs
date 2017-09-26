#include <iostream>
using namespace std;
void main()
{
	int m, n, k = 1;
	do
	{
		cin >> n;
		if (n >= -34 && n <= 90);
		{
			m = k;
			k *= n;
		}
	} while (n != 0);
	cout << "Result = " << m << endl;
	system("pause");
}