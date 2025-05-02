// You are given an array A of size N containing positive integers. 
// For each element in the array, count the number of elements to its right that are smaller than the current element.
#include <iostream>
#define MAX 100
void func(int arr[], int n);
using namespace std;
void func(int arr[], int n) {
    int result[MAX]; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[i]) {
                count++;
            }
        }
        result[i] = count;
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[MAX];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    func(arr, n);
    return 0;
}
