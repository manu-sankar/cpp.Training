#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter n";
	cin >> n;
	int i, j, k;
	for (i = 1;i <= n;i++) 
	{
		for (j = 1;j <= n-i;j++) {
			cout << " ";
		}
		for (k = 1;k <= 2 * i - 1;k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (i = n-1;i >= 1;i--)
	{
		for (j = n-i;j >= 1;j--) {
			cout << " ";
		}
		for (k = 1;k <= 2 * i - 1;k++) {
			cout << "*";
		}
		
		cout << endl;
	}
	
	return 0;
}


