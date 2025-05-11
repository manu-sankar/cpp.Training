#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a=0, b=1,c;
	if (n == 1) {
		cout << 0;
	}
	else if(n==2){
		cout << 1;
	}
	for (int i = 3;i <= n;i++) {
		c = a + b;
		a = b;
		b = c;
	}
	cout << c;
}