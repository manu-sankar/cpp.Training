//Odd Coin Counting

#include<iostream>
using namespace std;
int func(int num);
int func(int num) {
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) 
            sum += digit;
        num /= 10; 
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter number ";
    cin >> n;

    cout << "Sum of odd digits " << func(abs(n)) << endl;

    return 0;
}
