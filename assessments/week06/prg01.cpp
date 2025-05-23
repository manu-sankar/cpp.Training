#include<iostream>
#include<cstring>
using namespace std;

class Flight
{
private:
	string FlightNumber;
	int TotalSeats;
	int BookedSeats;
public:
	Flight(string fno, int tot)
	{
		FlightNumber = fno;
		TotalSeats = tot;
		BookedSeats = 0;
	}
	void bookSeats(int bseats)
	{
		if (BookedSeats+bseats <= TotalSeats)
		{
			BookedSeats += bseats;
		}
		else
		{
			cout << "Booking Failed: Not enough seats." << endl;
		}
	}

	void showAvailability()
	{
		int avaSeats = TotalSeats - BookedSeats;
		cout << "Flight: " << FlightNumber << " | " << "Seats Available: " << avaSeats << endl;
	}
	
};

int main()
{
	Flight f1("AI203", 100);
	f1.bookSeats(30);
	f1.showAvailability();

	f1.bookSeats(80);
	return 0;
}