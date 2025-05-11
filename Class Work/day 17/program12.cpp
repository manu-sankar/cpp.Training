#include<iostream>
using namespace std;
int main() {
	int dec = 55, oct = 0, place = 1;
	while (dec>0) {
		int rem = dec % 8;
		oct += rem * place;
		dec /= 8;
		place*=10;
	}
	cout << oct;
	return 0;
}
