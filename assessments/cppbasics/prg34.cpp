#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int val = 1;
	for (int i = 0;i <= n;i++) {
		for (int j = 0;j < i;j++) {
			cout << val<<" ";
			val++;
		}
		cout << endl;
	}
}