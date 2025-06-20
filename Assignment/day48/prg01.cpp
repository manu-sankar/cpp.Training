#include<iostream>
#include<mutex>

using namespace std;

class Sensor
{
protected:
	int sensorId;
	string sensorType;
	float readingValue;
public:
	Sensor(int sensorId, string sensortype,float readingvalue):sensorId(sensorId),sensorType(sensortype),readingvalue(readingvalue){}

	void updateReading(float value)
	{
		readingValue = value;
	}
	void sensorDetails()
	{
		cout << "Id: " << sensorId << endl;
		cout << "Type: " << sensorType << endl;
		cout << "Reading value: " << readingValue << endl;
	}
};

class TemperatureSensor :public Sensor
{
private:
	int unit;
public:
	TemperatureSensor(int sensorId, string sensorType, float readingValue, int unit):Sensor(sensorId, sensorType, readingValue),unit(unit){}
	void convertTemp()
	{
		int celsius = (unit - 32) * (5 / 9);
	}
};

int main()
{
	TemperatureSensor ts(1,"Celsius",87,32);
	ts.convertTemp();
	ts.sensorDetails();

}