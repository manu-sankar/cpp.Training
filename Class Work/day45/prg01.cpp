#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

using namespace std;

mutex mtx1;
mutex mtx2;

void thread1()
{
	lock_guard<mutex>lock1(mtx1);
	this_thread::sleep_for(chrono::milliseconds(100));
	lock_guard<mutex>lock2(mtx2);
	cout << "Thread 1 finished\n";
}


//Deadlock will occur nothing will be printed
//void thread2()
//{
//	lock_guard<mutex>lock2(mtx2);
//	this_thread::sleep_for(chrono::milliseconds(100));
//	lock_guard<mutex>lock1(mtx1);
//	cout << "Thread 2 finished\n";
//}


void thread2()
{
	lock_guard<mutex>lock1(mtx1);
	this_thread::sleep_for(chrono::milliseconds(100));
	lock_guard<mutex>lock2(mtx2);
	cout << "Thread 2 finished\n";
}

int main()
{
	thread t1(thread1);
	thread t2(thread2);

	t1.join();
	t2.join();
}