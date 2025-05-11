#include<iostream>
using namespace std;
int main() {
	char arr[100];
	cin.getline(arr, 99);
	char revarr[100];
	int i,j = 0;
	int n = strlen(arr);
	for (i = n-1;arr[i]>=0;i--) {
		revarr[j] = arr[i];
		j++;
	}
	revarr[j] = '\0';
	if (strcmp(arr,revarr)==0) {
		cout << "It is palin array";
	}
	else {
		cout << "It is not palin array";
	}
	return 0;
}