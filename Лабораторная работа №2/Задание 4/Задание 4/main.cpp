#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	int **mas = new int*[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cout << "mas[" << i << "]" << "[" << j << "]= ";
			cin >> mas[i][j];
		}
	}
	cout << endl;
	int *mas2 = new int[n];
	for (int i = n, j = 0; i > 0, j < n; i--, j++)
	{
		mas2[j] = mas[i][j];
	}
	int *mas3 = new int[n];
	for (int i = n, j = n, p = 0; i > 0, j > 0, p < n; i--, j--, p++)
	{
		mas3[p] = mas[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		mas3[i] = mas2[i] * mas3[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "mas3[" << i << "]= " << mas3[i] << endl;
	}
	for (int i = 0; i < n; i++)
		delete[] mas[i];
	delete[] mas;
	delete[] mas2, mas3;
	system("pause");

	return 0;
}