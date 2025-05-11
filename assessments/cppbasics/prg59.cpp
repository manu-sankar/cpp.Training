// Count the no of odd numbers within  a range

#include<iostream>
using namespace std;
int main() {
	int start, end;
	cout << "Starting value" << endl;
	cin >> start;
	cout << "Ending value" << endl;
	cin >> end;
	cout << "Odd no" << endl;
	for (int i = start;i <= end;i++) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
	}

	return 0;
}