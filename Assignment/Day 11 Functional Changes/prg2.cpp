// Tower of Oddity
#include <iostream>
void func(int floor, int n);
using namespace std;
void func(int floor, int n) {
    if (floor > n) {
        return;
    }
    cout << "Visiting floor: " << floor << endl;
    func(floor + 2, n);
}
int main() {
    int n;
    cout << "Enter the n value ";
    cin >> n;
    cout << "Allowed floors:\n";
    func(1, n);
    return 0;
}
