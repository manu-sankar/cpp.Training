#include<iostream>
using namespace std;

void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);

int main() {
	int a=10, b = 29;
	swap1(a, b);
	cout << "In main (after swap)\n" << a << '\t' << b << endl;

	swap2(&a, &b);
	cout << "In main (after swap)\n" << a << '\t' << b << endl;


}
void swap1(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swa1 func \n" << a << '\t' << b << endl;
}

void swap2(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
	cout << "In swap2 func \n" << *a << '\t' << *b << endl;
}


