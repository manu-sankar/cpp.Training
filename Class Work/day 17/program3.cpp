#include<iostream>
using namespace std;
int main() {
	char s1[1024] = { '\0' };
	char s2[1024] = {'\0'};
	cin >> s1 >> s2;
	bool isAnagram = false;
	int freq[26] = { 0, };
	for (int i = 0;i < 26;i++) {
		freq[i] = 0;
	}
	if (strlen(s1) == strlen(s2)) {
		for (int i = 0;i < strlen(s1);i++){
			freq[s1[i] - 'a']++;
			freq[s2[i] - 'a']--;
		}
		for (int i = 0;i < 26;i++)
		{
			if (freq[i] > 0|| freq[i]<0) {
				isAnagram = false;
				cout << char(i + 'a') << "-" << freq[i] << endl;
			}
		}
	}
	else
	{
		isAnagram = false;
	}
	if (isAnagram) {
		cout << "It is not anagram";
	}
	else {
		cout << "Anagram";
	}
}