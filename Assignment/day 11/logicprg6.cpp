//Spaceship Countdown

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the countdown starting number: ";
    cin >> n;
    while (n > 0) {
        cout << n << endl;
        n--;  
    }
    cout << "Launch" << endl;
    return 0;
}
