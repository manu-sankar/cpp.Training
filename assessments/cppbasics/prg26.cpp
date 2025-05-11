#include<iostream>
using namespace std;
int main() {
	char ch1[100], ch2[100];
	cin >> ch1 >> ch2;
	int i, j;
	
	for (i = 0;i<strlen(ch1)-1;i++) {
		for (j = 0;j< strlen(ch2) - 1;j++) {
			if (ch1[j] > ch1[j+1]) {
				char temp;
				temp = ch1[j];
				ch1[j] = ch1[j+1];
				ch1[j+1] = temp;
			}
			if (ch2[j] > ch2[j + 1]) {
				char temp2;
				temp2 = ch2[j];
				ch2[j] = ch2[j+1];
				ch2[j+1] = temp2;
			}
		}
	}
	if (strcmp(ch1, ch2)==0) {
		cout << "is anagram";
	}
	else {
		cout << "is not anagram";
	}
	return 0;
}