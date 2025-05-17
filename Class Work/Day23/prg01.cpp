#include<iostream>
using namespace std;
int main() {
	int a[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 5;j++) {
			cout << "Address = " << (unsigned long int) & a[i][j] << "\t value = " << a[i][j] << endl;;
		}
	}
	int *ptr = nullptr;
	ptr = &a[0][0];
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;

	cout << endl;
	return 0;

}


/*

BA+ IV * sizeof(dt)=>1D // Index Value(IV)
8568 + 0+0*4=>8568=>1
8568 + 0+1*4=>8572=>2
8568 + 0+2*4=>8576=>3
8568 + 0+3*4=>8580=>4
8568 + 0+4*4=>8584=>5

BA + C*sizeof(dt)+(C*sizeof(dt))) // 1D

BA + rowIV*(NoofCol*sizeof(dt))+(colIV*sizeof(dt))

8568 + 0*(5*4)+0*4 => 8568 => 1
8568 + 0*(5*4)+1*4 => 8572 => 2
8568 + 0*(5*4)+2*4 => 8576 => 3
8568 + 0*(5*4)+3*4 => 8580 => 4
8568 + 0*(5*4)+4*4 => 8584 => 5


8568+ 1*(5*4)+0*4 => 8588 =>  6
8568+ 1*(5*4)+0*4 => 8592 =>  7
8568+ 1*(5*4)+0*4 => 8596 =>  8
8568+ 1*(5*4)+0*4 => 8600 =>  9
8568+ 1*(5*4)+0*4 => 8604 =>  10


*/