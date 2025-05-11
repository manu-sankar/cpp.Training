#include<iostream>
using namespace std;
int main() {
	char s1[] = { '1','2','3','4','5','9','0'};
	int sum = 0;
	for (int i = 0;i < strlen(s1);i++) {
		/*if (s1[i] >= 48 && s1[i] <= 57) {
			sum += s1[i]-48;

			OR 



		}*/
		if (s1[i]>=48 && s1[i]<=57) {
			isdigit(s1[i]);
			sum += s1[i] - 48;
		}
	}
	cout << sum;
	return 0;
}