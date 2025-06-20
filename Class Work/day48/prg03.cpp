#include<iostream>

using namespace std;

void harshad(int n)
{
	int temp = n;
	int sum = 0;
	while (temp)
	{
		sum += temp % 10;
		temp = temp / 10;
	}
	if (n % sum == 0)
	{
		cout << "Harshad Number " << endl;
	}
	else
	{
		cout << "Not Harshad Number " << endl;
	}
}

int main()
{
	int n;
	for (int i = 0;i < 5;i++)
	{
		cin >> n;
		harshad(n);
	}
}