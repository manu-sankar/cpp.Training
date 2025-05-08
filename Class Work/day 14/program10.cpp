#include<iostream>
using namespace std;
int main() {
	char s1[100];
	cout << "Enter the word";
	cin.getline(s1, 99);
	int i,j=0;
	char s2[100];
	memset(s2, '\0', 100);
	int count = 0;
	for (int i = 0;i < s1[i] != '\0';i++) {
		if (!(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U'))
		{
			s2[j] = s1[i];
			j++;
		}
	}
	//s2[j] = '\0';
	cout << s2;
	return 0;
}