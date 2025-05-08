#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int num, int p);
int getDigits(int num);
int main() {
	int n1,n2;
	cin >> n1>>n2;

	//int r = getDigits(n);
	for (int i = n1;i <= n2;i++)
	{
		int p = getDigits(i);
		if (armstrong(i, p)) {
			cout << i << endl;
		}
	}
}



int getDigits(int num) {
	int cDigits = 0;
	while (num>0) {
		cDigits++;
		num /= 10;
	}
	return cDigits;
}


bool armstrong(int num, int p) {
		int sum = 0;
		int temp = num;
		while (num>0) {
			int r = num % 10;
			sum += pow(r, p);
			num /= 10;
		}
		if (temp == sum)
			return true;
		else
			return false;
}