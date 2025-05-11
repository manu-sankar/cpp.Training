#include<iostream>
using namespace std;
int main() {
	int arr[] = { 3,4,2,5,1,8,9 };
	int max = arr[0];
	int min = arr[0];
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < n;i++) {
		if (max <= arr[i]) {
			max = arr[i];
		}
		if (min >= arr[i]) {
			min = arr[i];
		}
	}
	cout << max << endl;
	cout << min << endl;
}