#include<iostream>
using namespace std;
int main() {
	char ch[100];
	cin >> ch;
	int count = 0;
	while (ch[count]!='\0') {
		count++;
	}
	cout << count;
	return 0;
}	