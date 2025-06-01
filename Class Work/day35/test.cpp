#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	ofstream outfile("test.txt");

	if (outfile.is_open()) {
		outfile << "This is some text";
		outfile.close();
	}
	return 0;
}