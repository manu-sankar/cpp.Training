// Energy Crystals

#include <iostream>
int highestPowerOf2(int energy);
using namespace std;
int highestPowerOf2(int energy) {
    int power = 1;

    while (power * 2 <= energy) {
        power *= 2; 
    }

    return power;
}

int main() {
    int n;
    cout << "Enter the reading: ";
    cin >> n;
    int res = highestPowerOf2(n);
    cout << "The highest power of 2 less than or equal to " << n << " is: " << res << endl;

    return 0;
}
