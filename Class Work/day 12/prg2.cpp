#include<iostream>
#define ROW 10
#define COL 10
using namespace std;
int main() {
	int a[ROW][COL], b[ROW][COL], c[ROW][COL], r1=0, c1=0, r2=0, c2=0, i=0, j=0, k=0;
	int sum = 0;
	cout << "Enter rows and colomns of 1st matrix";
	cin >> r1 >> c1;
	cout << "Enter rows and colomns of 1st matrix";
	cin >> r2 >> c2;
	while(c1!=r2){
		cout << "The colomns of 1st matrix and rows of 2nd matrix doesnot match";
	}

	if(c1==r2){
	cout << "Enter the " << (r1 * c1) << "elements of matrix A";
	for (i = 0;i < r1;i++) {
		for (j = 0;j < c1;j++) 
			cin >> a[i][j];
	}
	}
	cout << "Enter the " << (r2 * c2) << "elements of matrix B";
	for (i = 0;i < r2;i++) {
		for (j = 0;j < c2;j++)
			cin >> a[i][j];
	}
	for (i = 0;i < r1;i++) {
		for (j = 0;j < c2;j++) {
			for (int k = 0, sum = 0;k < c1;k++) {
				sum += a[i][k] * b[k][j];
				c[i][j] = sum;
			}
		}
	}
	for (int i = 0;i < r1;i++) {
		for (int j = 0;j < c2;j++) {
			cout << c[i][j] << " ";
		cout << endl;
		}
	}
	return 0;

}