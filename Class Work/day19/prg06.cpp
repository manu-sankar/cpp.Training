#include<iostream>
using namespace std;
int main() {
	int a;
	a = 10;
	int* ptr = &a;//This causes segmentation fault
	*ptr = 101;
	cout << *ptr << endl;
	cout << *ptr << endl;
	int* ptr = (int*)malloc(10);// formula sizeof(int)
	int ptr = temp;
	cout<<"Address of "
	*ptr = 202;
	ptr++;
	cout << *ptr << endl;

	return 0;
}