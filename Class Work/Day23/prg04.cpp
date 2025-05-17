#include<iostream>
using namespace std;
void display(const char[]);
void display(const char name[]) {
	while (*name != '\0')
		cout << *name++;
	cout << endl;
}
int main() {
	char arr[] = "Hello World";
	display("Manu");
	display(arr);
	return 0;
}