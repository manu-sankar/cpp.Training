#include<iostream>
using namespace std;
int main() {
	char str[100];
	cin.getline(str, 99);
	char str2[100];
	int i, j = 0;
	for (i = 0;i<strlen(str);i++) {
		if (str[i] != ' ') {
			str2[j] = str[i];
			j++;
		}
	}
	str2[j] = '\0';
	cout<<str2;
}