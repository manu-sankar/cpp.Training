#include<iostream>
#include<cstring>
void display(int arr[], int CAP);
void displayPtr(int* arr, int CAP);
using namespace std;
int main() {
	int a[] = { 1,3,5,7,9 };
	int n = sizeof(a) / sizeof(a[0]);
	display(a, n);
	displayPtr(a, n);
}
void display(int arr[], int CAP) {
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}
void displayPtr(int *arr, int CAP) {
	for (int i = 0;i < CAP;i++)
		cout << arr[i]<<endl;
}
