#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) 
            return false;
    }
    return true;
}

int main() {
    vector<int> numbers;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    numbers.erase(remove_if(numbers.begin(), numbers.end(), isPrime), numbers.end());

    cout << "Without prime numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
