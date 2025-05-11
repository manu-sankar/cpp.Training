#include<iostream>
using namespace std;
int main() {
	char arr[100];
	cin >> arr;
	int sum = 0;
	int i = 0;
	while (arr[i] != '\0') {
		int num = arr[i];
		if ( num >= 48 && num <= 57) {
			sum += num-48;	
		}
		i++;
	}
	cout << sum;
	return 0;
}
