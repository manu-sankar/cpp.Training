#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin("sample.txt");

	if (fin.is_open())
	{
		fin.seekg(5, ios::beg);

		cout << "Current position (get pointer) " << fin.tellg() << endl;

		char ch;
		fin.get(ch);
		cout << "Character at position 5: " << ch << endl;

		char ch1;
		fin.get(ch1);
		cout << "Character at position 5: " << ch1 << endl;

		fin.close();
	}
	return 0;
}

