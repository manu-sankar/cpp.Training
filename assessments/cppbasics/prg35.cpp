#include<iostream>
using namespace std;
int main() {
	char arr[100];
	cin.getline(arr, 99);
	char arr2[100];
	int i, j = 0;
	int n = strlen(arr);
	for (i = n - 1;i >= 0;i--) {
		arr2[j] = arr[i];
		j++;
	}
	arr2[j] = '\0';
	cout << arr2;
}