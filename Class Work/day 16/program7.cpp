#include<iostream>
using namespace std;
int main() {
	char str[100];
	cin.getline(str, 99);
	int temp;
	int length = 0;
	while (str[length]!='\0') {
		length++;
	}
	for (int i = 0; i<=length/2 ;i++) {
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
	cout << str;
	return 0;
}

