#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,2,4,5,7,3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int temp;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
	cout << arr[1];
	return 0;
}