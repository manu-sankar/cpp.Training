#include<iostream>
//#include<thread>
#include<mutex>

using namespace std;

typedef unsigned long long ull;

int amt = 0;

void addMoney(int x)
{
	mutex m;
	ull start = 0, end=1900000000;
	cout << "Amount " << amt << endl;
	m.lock();
	amt += x;
	m.unlock();
}

void subMoney(int x)
{
	cout << "Amount sub = " << amt << endl;
	amt -= x;
}

int main()
{
	thread t1(addMoney, 150);
	thread t2(subMoney, 100);

	t2.join();
	cout << "Amount: " << amt << endl;


	t1.join();
	cout << "Amount: " << amt << endl;

	return 0;
}