#include <iostream>
using namespace std;
void main()
{
	int k;
	for (k = 15; k < 225; k++)
	{
		int a = k / 15;
		int b = k % 15;
		int c = (a + b) + ((a + b) * (a * b));
		if (c == k)
		{
			cout << k << endl;
		}
	}
	system("pause");
}

