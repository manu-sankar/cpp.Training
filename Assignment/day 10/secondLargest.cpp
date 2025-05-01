#include<iostream>
int find(int n);
using namespace std;
int find(int n) {
	if (n < 10){
		return -1;
	}
	return (n / 10) % 10;
}
int main() {
	int num;
	cout << "Enter a number";
	cin >> num;
	int res = find(num);
	if (res == -1) {
		cout << "No digit found";
	}
	else {
		cout << "The second last digit is " << res<<endl;
	}
	return 0;
}




