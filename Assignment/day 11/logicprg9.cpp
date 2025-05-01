//9. Magic Multiplying Puzzle

#include <iostream>
bool isPrime(int num);
int productOfDigits(int num);
using namespace std;
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= (num % 10); 
        num /= 10;  
    }
    return product;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int product = productOfDigits(number);
    if (isPrime(product)) {
        cout << "Box opens! The product of digits (" << product << ") is a prime number." << endl;
    }
    else {
        cout << "Box remains closed! The product of digits (" << product << ") is not prime." << endl;
    }

    return 0;
}
