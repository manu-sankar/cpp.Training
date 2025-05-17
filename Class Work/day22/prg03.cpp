#include<iostream>
using namespace std;
int max2Nos(int*, int*);
int max2Nos(int* x, int* y) {
	int retValue = 0;
	/*if (*x < *y)
		retValue = *y;
	else
		retValue = *x;*/

	retValue = (*x > *y) ? (*x) : (*y);
	return retValue;
}




int main() {
	int v1 = 10, v2 = 20;
	cout << max2Nos(&v1, &v2) << endl;
	disp(20);
	return 0;
}