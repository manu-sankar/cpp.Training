#include<iostream>
#include<thread>

using namespace std;

void printNo1()
{
	for (int i = 1;i <= 10;++i)
	{
		cout << "Thread1: " << i << endl;
	}
	cout << endl;
}

void printNo2()
{
	for (int i = 11;i <= 20;++i)
	{
		cout << "Thread2: " << i << endl;
	}
	cout << endl;
}

int main()
{
	thread t1(printNo1);
	t1.join();

	thread t2(printNo2);
	t2.join();

	return 0;
}