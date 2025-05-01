#include<iostream>
using namespace std;
int main() {
	int a[] = {1, 4, 0, 0, 3, 10, 5};
	int i, sum=0;
	cout <<"Total No of array elements = "<< sizeof(a) / sizeof(a[0]) << endl;
	for (i = 0;i < sizeof(a) / sizeof(a[0]);i++) {
		cout << a[i] << endl;
	//ssum+=a[i];
	}
	//cout <<"Sum of all array elements ="<< sum << endl;
	int index1, index2;
	cout << "Enter index 1 ";
	cin >> index1;
	cout << "Enter index 2 ";
	cin >> index2;
	for (i = index1;i <= index2;i++) {
		sum += a[i];
	//	cout << sum;
	}
	cout << "Sum between indexes " << index1 << " and " << index2 << " is " << sum << endl;
	return 0;
}