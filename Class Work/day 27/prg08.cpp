#include<iostream>
#define MAX 100
using namespace std;

class arr
{
private:
	int arr[MAX];
	int size=5;
public:
	int arrInput()
	{
		cout << "Enter the array elements";
		for(int i=0;i<size;i++)
		{
			cin >> arr[i];
		}
	}
	int biggest()
	{
		int max=arr[0];
		for (int i = 0;i < 5;i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
			}
		}
		cout << max;
	}
};