#include<iostream>
using namespace std;
int main() {
	char str[100];
	cin.getline(str, 99);
	char ch;
	int count;
	for (int i = 0;str[i] != '\0';i++) {
		count = 0;
		for (int j = i+1;str[j] != '\0';j++) {
			if (str[i] == str[j]) {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}