#include<iostream>
#define MAXBITES 10
using namespace std;
int food() {
	int taste = 0;
	int plateEmpty = MAXBITES;
	do {
		cout << "Have a bite of the food "<<endl;
		plateEmpty--;
		cout << "How is the taste 0/1 ";
		cin >> taste;
	} while ((taste > 0) && (plateEmpty > 0));
	if (plateEmpty == 0) {
		cout << "Person stopped eating as the plate was empty " << endl;
		cout << "And the food was awesome" << endl;
		}
	if (taste == 0) {
		cout << "Taste was not good enough after having " << (MAXBITES - plateEmpty)<<" bytes of food";
		}
	return 0;
}