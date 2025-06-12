#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

void printEven(int n)
{
	for (int i = 0;i < n;i++)
	{
		if (i % 2 == 0)
		{
			cout << "Even No:s " << i << endl;
		}
	}

}

void printOdd(int m)
{
	for (int i = 0;i < m;i++)
	{
		if (i % 2 != 0)
		{
			cout << "Odd no:s are" << i << endl;
		}
	}
}

int main()
{
	thread t1(printEven,10);
	thread t2(printOdd,10);

	t1.join();
	t2.join();
	

	return 0;
}