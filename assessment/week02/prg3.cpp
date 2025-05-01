//Armstrong Number

#include<iostream>
using namespace std;
int main() {
    int n1, sum = 0, res, digits = 0;
    cout << "Enter n: ";
    cin >> n1;
    int n2 = n1;
    int temp = n1;

    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }

   
    while (n2 != 0) {
        res = n2 % 10;
        int prod = 1; 

 
        for (int i = 0; i < digits; i++) {
            prod *= res;
        }

        sum += prod;
        n2 = n2 / 10;
    }

    if (sum == n1)
        cout << "Given " << n1 << " is an Armstrong number" << endl;
    else
        cout << "Given " << n1 << " is not an Armstrong number" << endl;

    return 0;
}
