#include<iostream>
using namespace std;
int main() {
	int arr[100] = { 5,3,2,6,8,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int leader = arr[n - 1];
	for (int i = n-1;i >=0;i--) {
		if (leader < arr[i]) {
			cout << arr[i] << " ";
			leader = arr[i];
		}
	}
	return 0;
}