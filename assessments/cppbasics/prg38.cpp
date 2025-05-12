#include<iostream>
#define MAX 100
using namespace std;
int str_len(char arr[], int count);
int str_len(char arr[], int count) {
	if (arr[count] == '\0')
		return count;
	else
		return str_len(arr, count + 1);
}


int main() {
	char arr[MAX];
	cin.getline(arr, MAX - 1);
	cout << str_len(arr, 0);
	return 0;
}