#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int max_val = ((a - b) & ((a - b) >> 31)) ^ a;
    int min_val = ((a - b) & ((a - b) >> 31)) ^ b;
    cout << "max is " << max_val << endl;
    cout << "min is " << min_val << endl;
    return 0;
}
