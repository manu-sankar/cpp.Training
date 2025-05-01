//Stairway of Squares

#include <iostream>
int func(int n);
using namespace std;
int func(int n) {
    if (n == 0) {
        return 0;
    }
    return (n * n) + func(n - 1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of squares from 1 to " << n << " is: " << func(n) << endl;
    return 0;
}
