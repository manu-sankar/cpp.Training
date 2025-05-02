// You are given an array A of positive integers. Your task is to find and print all the leaders in the array.

#include <iostream>
using namespace std;
#define SIZE 30 
void func(int arr[], int size) {
    int maxRight = arr[size - 1];
    cout << maxRight << " ";
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            cout << maxRight << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[SIZE], size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    func(arr, size);

    return 0;
}
