// Largest element in an array

#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,2,11,5,9 };
	int max = arr[0];
	for (int i = 0;i < arr[i];i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << max;
	return 0;
}