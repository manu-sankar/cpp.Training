#include<iostream>
using namespace std;
int main() {
	char word[20];
	cout << "Enter the word";
	cin.getline(word, 19);
	int count = 0;
	for (int i = 0;i < word[i]!='\0';i++) {
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
		{
			count++;
		}
	}
	cout << "The no of vowels is " << count;
	return 0;
}