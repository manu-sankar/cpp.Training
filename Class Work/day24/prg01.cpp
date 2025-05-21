#include<iostream>
using namespace std;
int sum = 0;

typedef struct shape {
	int length;
	int width;
}SHAPE;

int main() {
	SHAPE s1, s2;
	s1.length = 10;
	s1.width = 20;

	s2.length = 20;
	s2.width = 40;

	SHAPE s3;
	s3.length = s1.length + s2.length;
	s3.width = s1.width + s2.width;

	cout << "Length of s3 " << s3.length << "\t" << "Width of s3 " << s3.width << endl;




	SHAPE s4 = s3;
	cout << "Length of s3 " << s4.length << "\t" << "Width of s3 " << s4.width << endl;


	s4.length = 50;
	s4.width = 100;
	cout << "Length of s3 " << s4.length << "\t" << "Width of s3 " << s4.width;



	return 0;
}