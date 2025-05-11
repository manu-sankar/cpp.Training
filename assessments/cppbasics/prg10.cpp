#include<iostream>
using namespace std;
int main() {
	char str1[20];
	cin.getline(str1, 19);
	char str2[20];
	int j = 0;
	for (int i = 0;i < strlen(str1);i++) {
		if (!(str1[i] == 'a' || str1[i] == 'A' || str1[i] == 'e' || str1[i] == 'E' || str1[i] == 'i' || str1[i] == 'I' || str1[i] == 'o' || str1[i] == 'O' || str1[i] == 'u' || str1[i] == 'U')) {
			str2[j] = str1[i];
			j++;
		}		
	}
	str2[j] = '\0';
	cout << str2;
	return 0;
}