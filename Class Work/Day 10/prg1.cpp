#include<iostream>
using namespace std;
int main() {


	int batteryStatus, mobileStatus;
	cout << "Enter charge ";
	cin >> batteryStatus;
	if (mobileStatus == 1){
		if (batteryStatus <= 10) {
			cout << "Plug in" << endl;;
		}
	cout << "Can receive calls" << endl;;
	cout << "Can browse apps" << endl;
	cout << "Can play games" << endl;
}
	else {
		cout << "Powering on the mobile";
		cout << "Mobile Status 0/1";
		cin >> mobileStatus;
		if (mobileStatus == 1) {
			cout << "Battery status 0-100 ";
			cin >> batteryStatus;
			if (batteryStatus <= 10) {

			}
		}
		
	}
	return 0;
}