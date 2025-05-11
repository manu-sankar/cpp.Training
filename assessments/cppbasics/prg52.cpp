#include <iostream>
#include <climits>
using namespace std;
int main() {
	long long n;
	cin >> n;
	if (n<INT_MIN || n>INT_MAX)
	{
		cout << n <<" out of integer limits" << endl;
	}
	else
	{
		cout << n <<" is within integer limit" << endl;
	}

	return 0;
}