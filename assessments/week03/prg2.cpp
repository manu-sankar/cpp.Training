//You are given a sorted array A of size N containing integers.Every element in the array appears exactly twice, except for one element that appears only once.Your task is to find and print that unique element.

#include <iostream>
#define MAX 100
using namespace std;
int func(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        if (i == n - 1 || arr[i] != arr[i + 1]) {
            return arr[i];
        }
    }
    return -1;
}
int main() {
    int n;
    cout << "Enter array size ";
    cin >> n;
    int arr[MAX];
    cout << "Enter array elements ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Unique element is " << func(arr, n) << endl;
    return 0;
}
