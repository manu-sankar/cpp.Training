//First Non-Zero Digit in Secret Code
#include <iostream>
#include <string>
bool isEven(int digit);
using namespace std;

bool isEven(int digit) {
    return digit % 2 == 0;
}

int main() {s
    string code;

    cout << "Enter the code: ";
    cin >> code;

 
    for (char ch : code) {
        if (ch != '0') {
            int firstDigit = ch - '0';  

            if (isEven(firstDigit)) {
                cout << "Valid code: First non-zero digit (" << firstDigit << ") is even." << endl;
            }
            else {
                cout << "Invalid code: First non-zero digit (" << firstDigit << ") is odd." << endl;
            }
            return 0; 
        }
    }

    cout << "Invalid code: No non-zero digits found." << endl;
    return 0;
}
