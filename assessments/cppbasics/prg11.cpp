#include<iostream>
using namespace std;
int main() {
	char ch[100];
	cin >> ch;
	char str2[100];
	int i,j=0;
	for (i = 0;i < strlen(ch);i++) {
		if(ch[i]>='A' && ch[i]<='Z' || ch[i]>='a' && ch[i]<='z'){
			str2[j] = ch[i];
			j++;
		}
	}
	str2[j] = '\0';
	cout << str2;
}