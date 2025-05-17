//Count vowel in the string

#include<iostream>
using namespace std;
void countVowel(char* a[], int count);

int countVowel(char* ptr) {
	int count = 0;
	while (*ptr != '\0') {
		switch (*ptr) {
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			count++;
		}
		ptr++;
	}
	return count;
}

int main() {
	char arr[100];
	cin.getline(arr, 100);
	cout << "No of vowels" << countVowel(arr);
	//int n = sizeof(arr) / sizeof(arr[0]);
	//countVowel(arr);
	
	return 0;
}