/*#include<iostream>
using namespace std;
int noOfSeries() {
	int n, count=0;
	cout << "Enter n value ";
	cin >> n;
	for (int i = 1;i < n;i++) {
		for (int j = i;j < n;i++) {
			for (int k = j;k < n;i++) {
				for (int l = k;l < n;i++) {
					if (i+j+k+l == n) {
						cout << i << "+" << j << "+" << k << "+" << l << "=" << n;
						count++;
					}
				}
			}
		}
		if(count==0)
			cout <<"No of ways"<< count;
	}
	return 0;
}*/