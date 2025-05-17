#include<iostream>
using namespace std;
int* func(int);
int* func(int a) {
	static int sum = 0;//using static as a fix to avoid dangling pointer. Try changing static see the change
	sum += a;
	cout << "BA of sum" << (unsigned long int) & sum << endl;
	return &sum;
}
int main() {
	int* ptr = func(101);
	cout << "BA of ptr" << (unsigned long int) & ptr << endl;
	*ptr = 202;
	ptr = func(303);
	cout << *ptr << endl;
	return 0;
}