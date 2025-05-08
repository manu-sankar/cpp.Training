#include<iostream>
using namespace std;
int main() {
	char str1[100];
	cin.getline(str1, 99);
	char str2[100];
	int i, j=0;
	for (i = 0;str1[i] != '\0';i++) {
		if (str1[i] == ' ') {
			continue;
		}
		else {
			str2[j] = str1[i];
			j++;
		}
		/*
		OR we can use this
		if (str1[i] != ' ') {
			str2[j] = str1[i];
			j++;
		}
		*/
	}
	str2[j] = '\0';
	cout << str2;
	return 0;
}