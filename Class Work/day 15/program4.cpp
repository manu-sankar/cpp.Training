#include<iostream>
#define PI 3.14
using namespace std;
int display();
int add(int, int);
int sub(int, int);
int runable(int);
int display() {
	cout << "Press " << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Enter choice " << endl;
}

int main(int argc, int argv[]) {
	if (argc > 1)
		runable(atoi(argv));
	else
		runable(-1);
}