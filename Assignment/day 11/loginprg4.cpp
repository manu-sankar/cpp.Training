// Secret Message in Binary

#include<iostream>
using namespace std;
int func(int num);
int func(int num) {
    int count = 0;

    while (num > 0) {
        if (num % 2 == 1)
            count++;
        num /= 2; 
    }

    return count;
}

int main() {
    int secretCode;
    cout << "Enter the code ";
    cin >> secretCode;

    cout << "Number of 1s in binary form: " << func(secretCode) << endl;

    return 0;
}
