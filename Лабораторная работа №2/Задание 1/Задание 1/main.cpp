#include <iostream>
using namespace std;
int main()

{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	int *m = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "m[" << i << "] ";
		cin >> m[i];
	}
	int sum = 0, mul = 1;
	for (int i = 0; i < n; i++)
	{
		sum = sum + m[i];
		mul = mul * m[i];
	}
	int *k = new int[n];
	for (int i = 0; i < n; i++)
	{
		if (k[i] < 0)
			k[i] = m[i] * m[i];
		else
			k[i] = m[i];
	}
	int a = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (k[i] <= k[i + 1])
			a = a * 1;
		else
			a = a * 0;
	}
	if (a == 1)
		cout << sum << endl;
	else
		cout << mul << endl;
	delete[] m, k;
	system("pause");

	return 0;
}
