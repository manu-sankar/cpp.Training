// Retail Store Application

#include<iostream>
#define MAX 3
using namespace std;

class retailStore
{
private:
	int itemId;
	char itemName[20];
	float itemPrice;
	char itemCategory[20];
	int itemQuant;
	void setId(int i)
	{
		itemId = i;
	}
	int getId()
	{
		return itemId;
	}
	void setItemName(const char* n)
	{
		strcpy(itemName, n);
	}
	char* getItemName()
	{
		return itemName;
	}
	void setItemPrice(float p)
	{
		itemPrice = p;
	}
	float getItemPrice()
	{
		return itemPrice;
	}
	void setItemCategory(const char* c)
	{
		strcpy(itemCategory, c);
	}
	char* getItemCategory()
	{
		return itemCategory;
	}
	void setitemQuant(int q)
	{
		itemQuant = q;
	}
	int getItemQuant()
	{
		return itemQuant;
	}
public:
	void add()
	{
		for(int i=0;i<MAX;i++){
			if(itemQuant==0){
				cout << "Add Items ";
				cout << "ID ";
				cin >> itemId;
				cout << "Item Name ";
				cin.getline(itemName,20);
				cout << "Item price ";
				cin >> itemPrice;
				cout << "Item Category ";
				cin >> itemCategory;
				cout << "Item Quantity ";
				cin >> itemQuant;
			}
			else if(itemQuant==MAX){
				cout << "Item is full";
			}
	}
		}
	void updateItemName(const char* name)
	{
		strcpy(itemName, name);
	}
	void updateItemId(int id)
	{
		
	}
};