//Sum of array using pointers and functions


#include<iostream>
using namespace std;
int sumArr(int*, int);

int sumArr(int* ptr, int n) {
	int sum = 0;
	/*for (int i = 0;i < n;i++) {
		sum += ptr[i];
	}


			OR
	*/

	for (int i = 0;i < n;i++,ptr++) {
		sum += *ptr;
	}

	return sum;
}
int main() {
	int arr[] = { 1,2,3,4,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << sumArr(arr, n);// OR cout << sumArr(&arr[0], n);
	return 0;
}
