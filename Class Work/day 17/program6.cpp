#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter n";
	cin >> n;
	int i, j, k;
	for (i = 0;i <= n;i++) 
	{
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		for (k = 0;k < ((2 * n) - (2 * i));k++)
		{
			cout << "  ";
		}
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}



	for (i = n-1;i >= 0;i--)
	{
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		for (k = 0;k < ((2 * n) - (2 * i));k++)
		{
			cout << "  ";
		}
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}