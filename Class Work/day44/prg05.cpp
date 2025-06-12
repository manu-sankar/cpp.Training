#include<iostream>
#include<mutex>
#include<thread>

using namespace std;

class Counter
{
private:
	int n;
	mutex m;
public:
	Counter() :n(0){}
	void increment()
	{
		for (int i = 0;i < 1000;i++)
		{
			m.lock();
			n++;
			//cout << n<<endl;
			m.unlock();
		}
	}
	int getN()
	{
		return n;
	}
};


int main()
{
	Counter c;
	thread t1(&Counter::increment,&c);
	thread t2(&Counter::increment, &c);
	t1.join();
	t2.join();
	cout << c.getN();
}

