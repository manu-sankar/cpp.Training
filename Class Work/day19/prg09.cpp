#include<iostream>
using namespace std;
int allocMem(int*, int);
int getValues(int*, int);
int sortAsc(int, int );
void disp(int*, int);
void swap(int&, int&);


int main() {
	int* ptr = nullptr;
	int n = 5;
	ptr = allocMem(ptr, n);
	getValues(ptr, n);
	cout << "Before sort" << endl;
	display(ptr, n);
	sortAsc(ptr, n);
	cout << "After sort" << endl;
	display(ptr, n);

	return 0;
}
int* allocMem(int* ptr, int noofELem) {
	ptr = (int *)malloc(noofELem * sizeof(int));
	return ptr;
}


int getValues(int* ptr int n) {
	for (int i = 0;i < n;i++, p++)
	{
		cin >> *p;
	}
	return 0;
}

void swap(int& x, int& y) {
	int t;
	t = x;
	x = y;
	y = t;
}

int sort(int* ptr, int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (p[i] < p[j]) {
				swap(p[i], p[j]);
			}
		}
	}
	return 0;
}

void display(int* p, int n)
{
	int i = 0;
	while (i < n) {
		cout << *p++ << "\t";
		i++;
	}
	cout << endl;
}












