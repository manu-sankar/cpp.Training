#include<iostream>
using namespace std;
int main() {
	char s1[100];
	cin.getline(s1, 99);
	int pos1=-1, pos2=-1;
	int sum = 0;
	//char s2[100];
	for (int i = 0;s1[i] != '\0';i++) {
		if (s1[i] == 'a' && s1[i + 1] == 'r' && s1[i + 2] == 'e') {
			pos1 = i;
			break;
		}
	}
	for (int j = 0;s1[j] != '\0';j++) {
		if (s1[j] == 'i') {
			pos2 = j;
			break;
		}
	}
	sum = pos1 + pos2;
	cout << sum;
	return 0;
}