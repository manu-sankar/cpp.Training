#include<iostream>
using namespace std;

typedef struct employee {
	int e_id;
	char e_name[20];
	char e_desg[20];
}EMP;


int main() {
	EMP e;
	cin >> e.e_id >> e.e_name >> e.e_desg;
	cout << e.e_id << '\t' << e.e_name << '\t' << e.e_desg << '\t' << endl;

	EMP* e1 = (EMP*)malloc(sizeof(EMP) * 3);
	EMP *temp = e1;
	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	e1++;
	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	/*e1++;
	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	e1++;
	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	e1++;
	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	e1++;*/

	cout << e1->e_id << '\t' << e1->e_name << '\t' << e1->e_desg << '\t' << endl;

}