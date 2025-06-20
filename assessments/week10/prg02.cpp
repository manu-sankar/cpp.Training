#include<iostream>

using namespace std;

int rowWithMaxOnes(int a[][100], int n)
{
	int max_ones = -1;
	int max_row = -1;
	for (int i = 0;i < n;i++)
	{
		int count = 0;
		for (int j = 0;j < n;j++)
		{
			if (a[i][j] == 1)
			{
				count++;
			}
			if (count > max_ones)
			{
				max_ones = count;
				max_row = i;
			}
		}
	}
	return max_row;
}

int main()
{
	int a[100][100] = {
        {0, 1, 1},
        {1, 1, 1},
        {0, 0, 1}
    };
    int n = 3;
    int row = rowWithMaxOnes(a, n);
    cout << "Row with maximum number of 1s: " << row << endl;

    return 0;
}