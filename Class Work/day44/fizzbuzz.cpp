#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
mutex m;

void printFizzBuzz(string s, int n, bool fizzbuzz)
{
	//bool prev = false;
	
	for (static int i = 1;i < n;)
	{
		m.lock();
		if (i % 3 == 0 && i % 5 != 0)
		{
			cout << "Fizz" << endl;

			//prev = true;
			i++;
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			cout << "Buzz" << endl;
			//prev = false;
			i++;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
			//prev = true;
			i++;
		}
		else
		{
			cout << i << endl;
			//prev = true;
			i++;
		}
		m.unlock();
	}
}

int main()
{
	thread t1(printFizzBuzz,"Fizz", 20,true);
	thread t2(printFizzBuzz, "Buzz", 20,false);
	thread t3(printFizzBuzz, "FizzBuzz", 20,true);

	t1.join();
	t2.join();
	t3.join();
	return 0;
}