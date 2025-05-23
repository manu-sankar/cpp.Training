#include<iostream>
using namespace std;
int main() {
	char s1[20], s2[20];
	cin >> s1 >> s2;
	
	int res = strcmp(s1, s2);
	cout << s1 << '\t' << s2 << endl;;
	
	if (res == 0) {
		cout << "Strings are equal" << endl;
	}
	else if (res > 0) {
		cout << "S1 greater than s2" << endl;
	}
	else {
		cout << "s2 is greater than s1" << endl;
	}
	return 0;
}