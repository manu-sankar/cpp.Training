//King's Perfect Army
#include<iostream>
using namespace std;
bool isPerfectNumber(int num);
bool isPerfectNumber(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)            
            sum += i;
    }

    return sum == num; 
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid input! Army number must be positive." << endl;
    }
    else if (isPerfectNumber(num)) {
        cout << "The army number is PERFECT" << endl;
    }
    else {
        cout << "The army number is NOT perfect" << endl;
    }

    return 0;
}
