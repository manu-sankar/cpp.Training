#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 12;
	char ch = 'A';
	float f = 10.5;
	void* ptr;
	int* ptr1 = nullptr;

	cout << "Address of a is " << (unsigned long int) & a << " and its value is" << a<<endl;
	cout << "Address of ch is " << (unsigned long int) & ch << "and its value is" << ch<<endl;
	cout << "Address of f is " << (unsigned long int) & f << "and its value is" << f << endl;
	cout << "Address of ptr = " <<  & ptr << " it value is " << endl;
	printf("Address f ptr=%u and its value= %u\n", &ptr1, ptr);
	a = 10;
	ptr1 = &a;
	printf("Address f ptr=%u and its value= %u\n", &ptr1, ptr1);

	printf("%u is having a value stored as = %d\n", &ptr1, *ptr1);
	//ptr = &b;

	printf("address of b = %u and its value =%d\n", &b, b);
	*ptr1 = 101;
	
	ptr = &a;
	printf("Address f ptr=%u and its value= %u\n", &ptr, ptr);

	ptr = &ch;
	printf("Address f ptr=%u and its value= %u\n", &ptr, ptr);



	return 0;
}