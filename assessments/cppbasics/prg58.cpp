//Check if a Number is Divisible by Both 3 and 5
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a % 3 == 0 && a % 5 == 0) {
		cout << " It is divisble by both 3 and 5";
	}
	else {
		cout << "Not divisible";
	}
	return 0;
}