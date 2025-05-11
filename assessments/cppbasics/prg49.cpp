#include<iostream>
using namespace std;
int main(){
	int dec;
	cin >> dec;
	int r;
	int place = 1;
	int octal = 0;
	int temp = dec;
	while (temp) {
		r = temp % 8;
		octal += r * place;
		temp /=8;
		place*=10;
	}
	cout << octal;
	return 0;
}