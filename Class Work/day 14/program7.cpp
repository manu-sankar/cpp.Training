#include<iostream>
using namespace std;
int main() {
	char s1[]="Hello";
	int count = 0;
	while (s1[count] != '\0')
	{
		count++;
	}
	cout << "Length is " << count;
	return 0;
}