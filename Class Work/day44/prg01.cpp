#include<iostream>
#include<thread>

using namespace std;

void greet()
{
	cout << "Hello World " << endl;
}

void disp(int x)
{
	cout << "X: " << x << endl;
}

void modifyX(int& x)
{
	x *= 2;
}


int main()
{
	int val = 10;
	thread t1(greet);

	t1.join(); //Here join will attach a process to the main thread
	cout << "End of the program" << endl;
	//t1.join();//main thread will wait until this t1 is completed

	thread t2(disp, 101);//call by value
	t2.join();

	thread t3(modifyX, ref(val));//call by reference
	cout << "Val :" << val << endl;
	t3.join();
	cout << "Val :" << val << endl;
	return 0;

}