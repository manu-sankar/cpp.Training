#include<iostream>
using namespace std;
int main() {
	int arr[] = { 3,5,7,1,2,8 };
	int max = arr[0];
	int min = arr[0];
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 1;i < n ; i++) {
		if (arr[i] > max) {
			max = arr[i];
			//cout << max;
		}
		else if (arr[i] < min) {
			min = arr[i];
			//cout << min << endl;
		}
	}
	cout << max<<endl;
	cout << min << endl;
	return 0;
}