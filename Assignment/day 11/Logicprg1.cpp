//Lost Treasure Map

#include<iostream>
using namespace std;
int func(int num);
int func(int num) {
    int smallest = 9;

    while (num > 0) {
        int digit = num % 10; 
        if (digit < smallest)
            smallest = digit;
        num /= 10; 
    }

    return smallest;
}

int main() {
    int num;
    cout << "Enter the number ";
    cin >> num;

    cout << "The smallest digit is: " << func(abs(num)) << endl;

    return 0;
}
