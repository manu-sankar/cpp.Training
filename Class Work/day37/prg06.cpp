#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sortDesc(vector<int> &arr)
{
	sort(arr.begin(), arr.end(), greater<int>());	
}


int main()
{
	vector<int>scoreArr;
	int val;
	while (true)
	{
		cin >> val;
		if (val == -1)
		{
			break;
		}
		else
		{
			scoreArr.push_back(val);
		}
	}
	cout << endl;
	sortDesc(scoreArr);
	for (auto i : scoreArr)
	{
		cout<<i<<" ";
	}
	cout << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << "Top 3 Scores are " << scoreArr[i];
	}
}