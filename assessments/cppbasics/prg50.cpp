#include <iostream>
using namespace std;
int main() {
	int dec;
	cin >> dec;
	char hexDigits[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
							'A', 'B', 'C', 'D', 'E', 'F' };
	string hexNumber = "";
	while (dec > 0) {
		int rem = dec % 16;
		hexNumber = hexDigits[rem] + hexNumber;
		dec /= 16;
	}
	cout << hexNumber << endl;

	return 0;
}