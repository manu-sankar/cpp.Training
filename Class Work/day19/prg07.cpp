#include<iostream>
using namespace std;
int main() {
	int* ptr = nullptr;
	int* temp = nullptr;
	int noofElem = 5;
	temp = ptr;

	for (int i = 0;i < noofElem;i++){
		cout << "Enter the " << i + 1 << " value " << endl;
		cin >> *ptr;
	}
	ptr = temp;
	for (int i = 0;i < noofElem;i++, ptr++) {
		cout << (i + 1) << " value " << *ptr << endl;
	}
	ptr = temp;
	for (int i = 0;i < noofElem;i++) {
		cout << (i + 1) << " value " << ptr[i] << endl;
	}
	return 0;
}