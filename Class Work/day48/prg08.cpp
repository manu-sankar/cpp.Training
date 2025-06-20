#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
mutex mtx;
void printEven(int n)
{
	mtx.lock();
	for (int i = 0;i < n;i++)
	{
		if (i % 2 == 0)
		{
			cout << "Even No:s " << i << endl;
		}
	}
	mtx.unlock();
}

void printOdd(int m)
{
	mtx.lock();
	for (int i = 0;i < m;i++)
	{
		if (i % 2 != 0)
		{
			cout << "Odd no:s are" << i << endl;
		}
	}
	mtx.unlock();
}

int main()
{
	thread t1(printEven, 20);
	thread t2(printOdd, 20);

	t1.join();
	t2.join();

	return 0;
}