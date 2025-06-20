#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>oddNo;
	auto printOdd = [](int n, vector<int>&nums)
		{
			for (int i = 0;i < n;i++)
			{
				if (i % 2 != 0)
				{
					nums.push_back(i);
				}
			}
		};
	printOdd(20, oddNo);
	for (auto i : oddNo)
	{
		cout << i << endl;
	}
	return 0;
}


