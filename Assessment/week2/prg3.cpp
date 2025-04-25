//Armstrong number

#include<iostream>
using namespace std;
int main() {
	int n1, sum = 0, res;
	cout << "Enter n ";
	cin >> n1;
	int n2= n1;
	while (n2 !=0) {
		res = n2 % 10;//Here each digit is taken
		sum = sum + (res * res * res);//Here cube of each digit is taken and added to the sum
		n2 = n2 / 10;//This is to take the last digit
	}
	if (sum == n1)
		cout << "Given " << n1 << " is armstrong" << endl;//here checking if sum is equal to the input number and if yes returns armstrong
	else 
		cout << "Given "<< n1 <<" is not armstrong"<<endl;
	system("pause");
	return 0;
}