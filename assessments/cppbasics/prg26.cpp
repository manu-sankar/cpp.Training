#include<iostream>
using namespace std;
int main() {
	char ch1[100], ch2[100];
	cin >> ch1 >> ch2;
	int i, j;
	bool isAnagram = true;
	for (i = 0;ch1[i] != '\0';i++) {
		for (j = 0;ch2[j] != '\0';j++) {
			if (ch1[i] != ch2[j]) {
				isAnagram = false;
			}
		}
	}
	if (isAnagram == true) 
	{
		cout << "is anagram";
	}
	else if(isAnagram==false)
	{
		cout << "is not anagram";
	}
	return 0;
}