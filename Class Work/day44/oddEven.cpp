#include<iostream>
#include<thread>

using namespace std;

void oddEven(bool isEven)
{
	int n;
	cin >> n;
	bool oddEven = true;
	for (int i = 1;i <= n;i++)
	{
		if ((i % 2 == 0)==isEven)
		{
			cout << (isEven?"Even":"Odd")<<i << endl;
		}
	}	
}

int main()
{
	thread t1(oddEven, true);
	t1.join();

	thread t2(oddEven, false);
	t2.join();

	return 0;
}