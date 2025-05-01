//Summoning the Dragon

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the n ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue; 
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
