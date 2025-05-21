#include<iostream>
using namespace std;

class movie
{
private:
	char title[50];
	char genre[20];
	float rating;
public:
	void setTitle(const char* t)
	{
		strcpy(title, t);
	}
	char* getTitle()
	{
		return title;
	}
	void setGenre(const char* g)
	{
		strcpy(genre, g);
	}
	char* getGenre()
	{
		return genre;
	}
	void setRating(float r)
	{
		rating = r;
	}
	float getRating()
	{
		return rating;
	}
	void calRating()
	{
		if (rating > 8 && rating <=10)
		{
			cout << "Hit";
		}
		else if(rating>=7.9 && rating<=6)
		{
			cout << "Avg";
		}
		else if (rating < 6 && rating>=1)
		{
			cout << "Flop";
		}
		else if (rating < 1)
		{
			cout << "Invalid";
		}
	}
	void display()
	{
		cout << "Title " << title << endl;
		cout << "Genre " << genre << endl;
		cout << "Rating " << rating << endl;
	}
};

int main()
{
	movie m;
	m.setTitle("Final Destination");
	m.setGenre("Thriller");
	m.setRating(8.7);
	m.display();
	m.calRating();
}
