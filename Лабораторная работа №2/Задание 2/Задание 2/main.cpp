#include <iostream>
using namespace std;
int main()

{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	int *s = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "s[" << i << "] ";
		cin >> s[i];
	}
	int max = s[0], min = s[0];
	for (int i = 0; i < n; i++)
	{
		if (s[i] > max)
			max = s[i];
		if (s[i] < min)
			min = s[i];
	}
	int imin;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == min)
			imin = i;
	}
	int imax;
	for (int i = n; i > 0; i--)
		if (s[i] == max)
			imax = i;
	for (int i = imax + 1; i < imin; i++)
	{
		if (s[i] % 2 == 0, s[i - 1] != 0)
			s[i] = - (s[i]);
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "s[" << i << "]= " << s[i] << endl;
	}
	delete[] s;
	system("pause");

	return 0;
}

