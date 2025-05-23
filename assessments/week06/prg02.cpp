#include<iostream>
using namespace std;

class HotelRoom
{
private:
	int RoomNumber;
	string type;
	bool IsBooked;
public:
	HotelRoom(int rNo, string t)
	{
		RoomNumber = rNo;
		type = t;
		IsBooked = true;
	}
	void bookRoom()
	{
		if (IsBooked==false)
		{
			cout << "Room " << RoomNumber<< " is now booked" << endl;
		}
		
	}


	void showStatus()
	{
		cout << "Room " << RoomNumber << " AC " << " is already booked" << endl;
		if (IsBooked==true)
		{
			cout << "Room already booked" << endl;
		}
	}
};

int main()
{
	HotelRoom h1(201, "AC");
	h1.bookRoom();
	h1.showStatus();
	h1.bookRoom();
	return 0;
}