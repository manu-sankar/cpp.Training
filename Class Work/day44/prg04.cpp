#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

class Counter
{
private:
	int x;
	mutex mtx;
public:
	Counter():x(0){}
	void increment(const string tname)
	{
		for (int i = 0;i < 5;i++)
		{
			lock_guard<mutex> lock(mtx);
			//mtx.lock();
			x += 2;
			cout << "\n" << tname << " increments x by " << x << endl;
		}
	}

	int getX()
	{
		return x;
	}
};


int main()
{
	Counter c;
	thread t1(&Counter::increment, &c, "Thread 1");
	thread t2(&Counter::increment, &c, "Thread 2");

	return 0;
}

