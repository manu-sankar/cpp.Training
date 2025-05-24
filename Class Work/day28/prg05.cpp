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
		IsBooked = false;
	}
	void bookRoom()
	{
		if (IsBooked == true)
		{
			cout << "Room already booked" << endl;
		}
		
	}
	

	void showStatus()
	{
		if (IsBooked==false)
		{
			IsBooked = true;
			cout << "Room " << RoomNumber << " (" << type << ") " << " is now booked" << endl;
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