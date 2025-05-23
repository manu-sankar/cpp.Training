#include<iostream>
using namespace std;
int main() {
	int arr[3];
	cout << "Size of arr[0]= " << size(arr) << endl;
	cout << "Address of arr[0] = " << &arr[0]<< endl;
	cout << "Address of arr[1] = " << &arr[1] << endl;
	cout << "Address of arr[2] = " << &arr[2] << endl;

	printf("Address of arr[0] = %u \n", &arr[0]);
	printf("Address of arr[0] = %u \n", &arr[1]);
	printf("Address of arr[0] = %u \n", &arr[2]);
}