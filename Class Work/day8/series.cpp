/*#include<iostream>
using namespace std;
bool isPrime();
int main() {
		int num,count;
		cout << "Enter a number";
		cin >> num;
		for(int i=1;i<=num;i++){
			for(int j=i;j<=num;j++){
				if (isPrime(i) && isPrime(i)) {
					if (i + j == num) {
						cout << i << "+" << j << "=" << num;
						count++;
					}
				}
			}
		return 0;
	}
}
bool isPrime(int num) {
	bool flag = false;
	if (num <=1)
		return false;
	for (int i = 2;i <= num / 2;i++) {
		if (num % i == 0) {
			flag = true;
			break;
		}
		if (flag == false) {
			return true;
		}
		else {
			return false;
		}
	}

}*/