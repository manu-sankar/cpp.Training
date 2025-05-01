// The Doubling Machine

#include <iostream>
int func(int n);
using namespace std;
int func(int n) {
    return (1 << n) - 1;  
}
int main() {
    int n;
    cout << "Enter the number of button presses: ";
    cin >> n;
    cout << "The sum of all numbers seen is: " << func(n) << endl;
    return 0;
}
