#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char ch[] = { "hello"};
	cin >> ch;
	for (int i = 0;i<strlen(ch);i++) {
		if (isupper(ch[i])) {
			ch[i]=tolower(ch[i]);
		}
		else if (islower(ch[i])) {
			ch[i]=toupper(ch[i]);
		}
		else {
			cout << "It is not a character";
		}
	}
	cout << ch;
	return 0;
}