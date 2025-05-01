//The Endless Tunnel Puzzle

#include <iostream>
void func(int n);
using namespace std;
void func(int n) {
    if (n <= 0) {
        cout << "Energy depleted" << endl;
        return;
    }
    cout << "Current energy: " << n << endl;
    func(n / 2);
}
int main() {
    int energy;
    cout << "Enter the energy level: ";
    cin >> energy;

    cout << "Passing through gates...\n";
    func(energy);

    return 0;
}
