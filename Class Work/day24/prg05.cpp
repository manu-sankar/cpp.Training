#include<iostream>
using namespace std;
int main() {
	int rows = 4, col = 4;
	int** arr = nullptr;
	arr = (int**)malloc(sizeof(int*) * rows);

	for (int i = 0;i < rows;i++) {
		arr[i] = (int*)malloc(sizeof(int) * col);
	}

	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < col;j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < col;j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	return 0;
}