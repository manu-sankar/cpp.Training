// Broken Clock

#include<iostream>
using namespace std;
void func(int hour);
void func(int hour) {
    cout << "The magical clock will ring at these minutes for hour " << hour << ": ";

    for (int minute = 1; minute <= 60; minute++) { 
        if (hour % minute == 0)
            cout << minute << " ";
    }
    cout << endl;
}

int main() {
    int hour;
    cout << "Enter the current hour: ";
    cin >> hour;

    if (hour <= 0 || hour > 12) { 
        cout << "Invalid hour! Please enter a value between 1 and 12." << endl;
    }
    else {
        func(hour);
    }

    return 0;
}
