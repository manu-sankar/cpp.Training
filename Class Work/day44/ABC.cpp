#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
mutex m;
void print(string s)
{
	static int count = 0;
	for (int i = 0;i < 5;)
	{
		m.lock();
		if (count % 3 == 0 && s == "A")
		{
			cout << "A";
			i++;
			count++;
		}
		else if (count % 3 == 1 && s == "B")
		{
			cout << "B";
			i++;
			count++;
		}
		else if (count % 3 == 2 && s == "C")
		{
			cout << "C";
			i++;
			count++;
		}
		m.unlock();
	}
}

int main()
{
	thread t1(print, "A");
	thread t2(print, "B");
	thread t3(print, "C");
	t1.join();
	t2.join();
	t3.join();

	return 0;
}