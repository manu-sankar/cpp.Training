#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the no of elements ";
	cin >> n;
	int itr1 = 1;
	while (itr1 < n) {
		cout << (itr1 * itr1) - 1 << ",";
		itr1++;
	}
	cout << (itr1 * itr1) - 1;;
	return 0;
}