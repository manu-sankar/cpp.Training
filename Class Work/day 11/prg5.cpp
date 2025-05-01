#ifdef __INTELLISENSE__
	#pragma diag_suppress 28
#endif

#include<iostream>
using namespace std;
int main() {
	int a[] = {2,1,4,3,5,6,8,7};
	int i, countOdd, countEven;
	constexpr int noEle = sizeof(a) / sizeof(a[0]);
	int outputArr[noEle];
	cout << "No of elements " << noEle << endl;

	for (i = 1, countOdd = 0;i < noEle;i++) {
		if (a[i] % 2 != 0) {
			outputArr[countOdd] = a[i];
			countOdd++;
		}
	}
	for (i = 0, countEven = countOdd;i < noEle;i++) {
		if (a[i] % 2 == 0) {
			outputArr[countEven] = a[i];
			countEven++;
		}
	}

	for (i = 0;i < noEle;i++)
		cout << outputArr[i] << endl;
	return 0;
}