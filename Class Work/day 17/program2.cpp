#include<iostream>
using namespace std;
int main() {
	char s[1024];
	int freq[26] = { 0, };
	cin >> s;
	for (int i = 0;i<26;i++) {
		freq[i] = 0;
	}
	for (int i = 0;i<strlen(s);i++)
		freq[s[i] - 'a']++;
	for (int i = 0;i<26;i++)
	{
		if (freq[i] > 0) {
			cout << char(i + 'a') << "-" << freq[i] << endl;
		}
	}
}	