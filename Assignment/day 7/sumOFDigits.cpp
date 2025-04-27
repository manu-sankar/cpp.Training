#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

int main()
{

	int num, countWays = 0;
	cout << "Enter the number : ";
	cin >> num;

	for (int i = 1; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			for (int k = j; k < num; k++)
			{
				for (int l = k; l < num; l++)
				{
					if (i + j + k + l == num)
					{
						cout << i << '+' << j << '+' << k << '+' << l << endl;
						countWays++;
					}
				}
			}
		}
	}

	cout << "no of possibilities is : " << countWays << endl;
	return 0;
}

/*
OUTPUT :


Enter the number : 9
1+1+1+6
1+1+2+5
1+1+3+4
1+2+2+4
1+2+3+3
2+2+2+3
no of possibilities is : 6

*/