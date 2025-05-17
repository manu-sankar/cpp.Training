#include<iostream>
using namespace std;
int main() {
	int a[3] = { 10,20,30 };
	int* ptr = a;
	cout << *ptr++ << endl;
	cout << ++*ptr<< endl;
	cout << *++ptr << endl;//This points to the next location // ++*ptr=> increments the value
	cout << *ptr++ << endl;
	ptr = a;
	int prod = *ptr * *ptr;
	cout << prod << endl;

	cout << sizeof(ptr)<< "  " << sizeof(void*) << endl;
	return 0;
}