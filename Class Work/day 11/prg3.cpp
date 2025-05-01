#include<iostream>
#define CAP 10
using namespace std;
int main() {
	int arr[CAP];
	int gValue = 0;
	cout << "Enter the "<< CAP <<" elements of array"<<endl;
	cout << "The elements are " << endl;
	for (int i = 0;i < CAP;i++) {
		cin >> arr[i];
		cout << "Elements of array " << endl;
		for (int i = 0;i < CAP;i++) {
			cout << "The elements are " << arr[i];
			cin >> arr[i];


			cout << "Enter the value to e searched ";
			cin >> gValue;

			for (int i = 0; i < CAP;i++) {
				if (arr[i] == gValue)
					break;
			}
			if (i == CAP)
				cout << gValue << "Element not found in the list" << endl;
			else
				cout << gValue << " found at index position" << i << endl;
		}
	}
	return 0;
}