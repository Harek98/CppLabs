#include <iostream>
#include <string>


using namespace std;


struct  aeroflot
{
	char name[30];
	int number;
	char type[30];
};
int main()
{
	int count = 0;
	string input;
	cout << "Enter name: ";
	cin >> input;
	int const n = 7;
	aeroflot flots[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter name: ";
		cin >> flots[i].name;
		if (flots[i].name == "exit") break;
		cout << "Enter number: ";
		cin >> flots[i].number;
		cout << "Enter type: ";
		cin >> flots[i].type;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (flots[j].number > flots[j + 1].number)
			{
				aeroflot temp = flots[j];
				flots[j] = flots[j + 1];
				flots[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (flots[i].name == input)
		{
			cout << "number: " << flots[i].number << "type: " << flots[i].type << endl;
			count += 1;
		}
	}
	if (count == 0)
	{
		cout << "No flights" << endl;
	}
	return 0;
}