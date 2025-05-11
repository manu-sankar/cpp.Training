#include<iostream>
using namespace std;
int main() {
	float fahrenheit;
	cin >> fahrenheit;
	float celsius = ((fahrenheit - 32) * 5)/9;
	cout << celsius;
	return 0;
}