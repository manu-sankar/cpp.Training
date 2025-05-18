#include<iostream>
using namespace std;
typedef struct product {
	int id;
	string name;
	float quantity;
}prod;



typedef struct price {
	int id;
	float price;
}amt;


void add(prod*, amt*);
void list(prod*, amt*);
void display(prod*, amt*);
void del(prod*, amt*);
void update(prod*, amt*);
void search(prod* , amt* );



int quant = 3;

void display(prod* p, amt* a) {
	int options;
	cout << "Press 1: Add Items " << endl;
	cout << "Press 2: List Items "  << endl;
	cout << "Press 3: Update Items " << endl;
	cout << "press 4: Delete Items " << endl;
	cout << "Press 5: Search Items " << endl;
	cout << "Press 6: Exit" << endl;
	cin >> options;
	switch (options)
	{
	case 1:
		cout << "Add items" << endl;
		add(p, a);
		cout << endl;
		break;
	case 2:
		cout << "List items" << endl;
		list(p, a);
		cout << endl;
		break;
	case 3:
		cout << "Update items" << endl;
		update(p, a);
		break;
	case 4:
		cout << "Delete items" << endl;
		del(p, a);
		cout << endl;
		break;
	case 5:
		cout << "Search Item " << endl;
		search(p, a);
		cout << endl;
		break;
	case 6:
		cout << "Exit";
		cout << endl;
		exit(0);
		break;
	default:
		break;
	}
}




void add(prod* p, amt* a) {
	cout << "Enter the no of products" << endl;;
	cin >> quant;
	for (int i = 0;i < quant;i++) {
	cout << "Id ";
	cin >> p[i].id;
	cout << "Name ";
	cin >> p[i].name;
	cout << "Quantity ";
	cin >> p[i].quantity;
	cout << "Price ";
	a[i].id=p[i].id;
	cin >> a[i].price;
	}
	return;
}



void list(prod* p, amt* a) {
	for (int i = 0;i < quant;i++) {
		cout << "Product id " << p[i].id << endl;;
		cout << "Product name " << p[i].name << endl;
		cout << "Quantity" << p[i].quantity << endl;
		cout << "Price " << a[i].price << endl;
		cout << endl;
	}
}

void del(prod* p, amt* a) {
	int id;
	cin >> id;
	for (int i = 0;i < quant;i++) {
		if (p[i].id == id && a[i].id==id) {
			for (int j = 0;j < quant;j++) {
				p[j] = p[j+1];
				a[j] = a[j + 1];
			}
			quant--;
			break;
		}
	}
}

void update(prod* p, amt* a){
	int id;
	cout << "Enter the product to update " << endl;
	cin >> id;
	for (int i = 0;i < quant;i++) {
		if (p[i].id == id && a[i].id==id) {
			cout << "Id ";
			cin >> p[i].id;
			cout << "Name ";
			cin >> p[i].name;
			cout << "Quantity ";
			cin >> p[i].quantity;
			cout << "Price ";
			a[i].id = p[i].id;
			cin >> a[i].price;
		}
	}
}

void search(prod* p, amt* a) {
	int id;
	cout << "Enter the product to search " << endl;
	cin >> id;
	for (int i = 0;i < quant;i++) {
		if (p[i].id == id && a[i].id == id) {
			cout << "Id " << p[i].id << endl;
			cout << "Name " << p[i].name << endl;
			cout << "Quantity " << p[i].quantity << endl;
			cout << "Price " << a[i].price << endl;
		}
		break;
	}
}


int main() {
	prod* p = new prod[5];
	amt* a = new amt[5];
	while(1){
	display(p, a);
	}
	return 0;
}