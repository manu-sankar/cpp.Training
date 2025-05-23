#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,1,5,3,8,5,3,8,9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j, k;;
	for (i = 0;i < n;i++) {
		for (j = i + 1;j < n;) {
			if (arr[i] == arr[j]) {
				for (int k = j;k < n - 1;k++) {
					arr[k] = arr[k + 1];
				}
				n--;
				
			}
			else {
				j++;
			}
		}
	}
	for (i = 0;i < n;i++) {
		cout << arr[i]<<" ";
	}
	return 0;
}