// Program to count the consective characters
#include<iostream>
using namespace std;
int countConsecutive(char, int);
int countConsecutive(char arr[], int count,int n) {
	//count = 0;
	//int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < n;i++) {
		char ch = arr[i];
		char ch2 = arr[i + 1];
		if (ch-ch2==1 || ch2-ch==1) {
			count++;
		}
	}
	return count;
}


int main() {
	char arr[100];
	cin.getline(arr, 100);
	int count = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout<<countConsecutive(arr, count,n);
}