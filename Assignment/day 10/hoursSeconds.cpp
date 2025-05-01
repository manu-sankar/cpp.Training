#include<iostream>
void convert(int hours, int& minutes, int& seconds);
using namespace std;
void convert(int hours, int &minutes, int &seconds) {
	if (hours < 0){
		cout << "Invalid" << endl;
		return;
	}
	minutes = hours * 60;
	seconds = minutes * 60;
}
int main() {
	int n, minutes, seconds;
	cout << "Enter n ";
	cin >> n;
	convert(n, minutes, seconds);
	cout << "Hours into minutes "<< minutes << endl;
	cout << "Minutes into Seconds "<< seconds << endl;
	return 0;
}