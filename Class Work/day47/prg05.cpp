#include<iostream>

using namespace std;

int main()
{
	int a = 10, b = 5;
	auto add = [](int a, int b)
		{
			return a + b;
		};
	auto sub = [](int a, int b)
		{
			return a - b;
		};
	auto mul = [](int a, int b)
		{
			return a * b;
		};
	auto div = [](int a, int b)
		{
			if (b == 0)
			{
				cout << "Undefined" << endl;
			}
			else
			{
				return a / b;
			}
		};
	cout << "1. Add " << endl;
	cout << "2. Subtract " << endl;
	cout << "3. Multiplication " << endl;
	cout << "4. Division " << endl;
	cout << "5. Exit " << endl;
	while (true)
	{
		int options;
		cout << "Enter your choice " << endl;
		cin >> options;
		switch (options)
		{
		case 1:
			cout <<"Sum is "<< add(a, b) << endl;
			break;
		case 2:
			cout <<"Difference is "<< sub(a, b) << endl;
			break;
		case 3:
			cout <<"Product is "<< mul(a, b) << endl;
			break;
		case 4:
			cout <<"Quotient is " << div(a, b) << endl;
			break;
		case 5:
			exit(0);
			cout << "Exit " << endl;
			break;
		default:
			cout << "Invalid choice " << endl;
			break;
		}
	}
		
}