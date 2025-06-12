#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
mutex m;
bool pp = false;
void pingpong(string n, bool flag)
{
	for (int i = 0;i < 10;)
	{
		m.lock();
		if (flag == true && pp==false)
		{
			cout << "Ping" << endl;
			i++;
			pp = true;
		}
		else if (flag == false && pp==true)
		{
			cout << "Pong" << endl;
			i++;
			pp = false;
		}
		m.unlock();
	}
}

int main()
{
	thread t1(pingpong, "Ping",true);
	thread t2(pingpong, "pong",false);

	t1.join();
	t2.join();

	return 0;
}