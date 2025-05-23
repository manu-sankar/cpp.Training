#include<iostream>
using namespace std;
int main() {
	int arr[] = { 3,1,5,2,7,9,4 };
	int temp;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < n;i++) {
		for(int j=0;j<n;j++){
			if (arr[j] < arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << arr[n - 2]<<endl;
	return 0;
}