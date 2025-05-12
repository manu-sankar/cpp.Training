#include <iostream>
#include <cstring>
int palin(char arr[], int , int );
using namespace std;

int palin(char arr[], int n, int a) {
    if (n >= a) return 1;
    if (arr[n] != arr[a]) return 0;
    return palin(arr, n + 1, a - 1);
}

int main() {
    char str[100];
    cin.getline(str, 100);

    if (palin(str, 0, strlen(str) - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;

    return 0;
}