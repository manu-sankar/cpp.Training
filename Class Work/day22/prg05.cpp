#include<iostream>
using namespace std;
void revArrPtr(int*, int);
void revArr(int, int);
void disp(int);
void revArr(int a[], int n) {
	int t;
	for (int i = 0;i < n / 2;i++) {
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}


void revArrPtr(int* ptr, int n) {
	int temp;
	int* start = nullptr;//starting addr
	int* end = nullptr;//Ending addr
	start = ptr;
	end = ptr + (n - 1);//Base Addr+n-1
	while (start < end) {
		temp = *start;
		*start= *end;
		*end = temp;
		start++;
		end--;
	}
}

void disp(int a[], int n) {
	for (int i = 0;i < n;i++) {
		cout << a[i]<<'\t';
	}
}

int main() {
	int arr[] = { 10,20,30 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	revArr(arr, n);
	for (int i = 0;i < n;i++) {
		cout << arr[i]<<'\t';
	}
	cout << endl;
	revArrPtr(arr, n);
	for (int i = 0;i < n;i++) {
		cout << arr[i]<<'\t';
	}
	cout << endl;
	//disp(arr, n);
	return 0;
}