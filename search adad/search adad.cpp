// search adad.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[10][10], number, temp = -1;
	cout << "please enter number:" << endl;
	for (int i = 0;i <= 9;i++)
	{
		for (int j = 0;j <= 9;j++)
		{

			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	cout << "please enter number for search:" << endl;
	cin >> number;
	for (int j = 0;j <= 9;j++)
	{
		for (int i = 0;i <= 9;i++)
		{
			if (a[i][j] == number)
			{
				temp = i;
			}
		}

	}
	if (temp == -1)
	{
		cout << "nember not found!" << endl;
	}
	else
	{
		cout << "nember found!" << endl;
	}
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
