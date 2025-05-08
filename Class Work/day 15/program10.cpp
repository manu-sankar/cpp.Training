#include<iostream>
#define MAX 100
using namespace std;
bool func(int[], int);
int main() {
	int arr[MAX], n;
	cout << "Enter length";
	cin >> n;
	for (int i = 0;i<n;i++) {
		cin >> arr[i];
	}
	if (func(arr, n))
		cout << "is palin";
	else
		cout << "Not palin";

	return 0;
}

bool func(int arr[], int n) {
	for (int i = 0;i < n;i++) {
		if (arr[i] != arr[n - 1 - i]) {
			cout << "Not palin array";
			return false;
		}
	}
	//cout << "it is palin array";
	return true;
}