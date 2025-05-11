#include<iostream>
using namespace std;
void strRev(char,int,int);
void strRev(char arr[], int l, int r) {
	if (l >= r)
		return;
	else {
		char temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
	}
	 return strRev(arr, l+1, r-1);
}
int main() {
	char arr[100];
	cin >> arr;
	strRev(arr, 0 ,strlen(arr)-1);
	cout << arr;
	return 0;
}