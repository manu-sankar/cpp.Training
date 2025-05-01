//Number Mirror
#include <iostream>
void func(int n);
using namespace std;
void func(int n) {
    if (n == 0) {
        return;
    }
    int lastDigit = n % 10;
    cout << lastDigit << endl;
    func(n / 10);
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Extracted digits" << endl;
    if (number == 0) {
        cout << "0" << endl;  
    }
    else {
        func(number);
    }

    return 0;
}
