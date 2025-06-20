#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<fstream>


using namespace std;

class Customer
{
private:
	string msisdn;
	string t_msisdn;
	string brand;
	string mmc;
	string mmt;
	string moc;
	string mtc;
	string sms_mo;
	string sms_mt;
	string gprs;
public:
	Customer(string msisdn, string t_msisdn, string brand, string mmc, string mmt, string moc, string mtc, string sms_mo, string sms_mt, string gprs)
	{
		this->msisdn = msisdn;
		this->t_msisdn = t_msisdn;
		this->brand = brand;
		this->mmc = mmc;
		this->mmt = mmt;
		this->moc = moc;
		this->mtc = mtc;
		this->sms_mo = sms_mo;
		this->sms_mt = sms_mt;
		this->gprs = gprs;
	}
	void display()
	{

	}
};

int main()
{
	string line = "1037928|Jio|42502|SMS-MT|0|0|0|1136404|42504";
	vector<Customer>c;
	ifstream inFile("data.cdr");
	string line, substr1;
	line = "";
	vector<Customer>tokens;
	while (getline(inFile, line))
	{
		substr1 = "";
		stringstream ss(line);
		while (getline(s1, substr1, '|'))
		{
			tokens.push_back(substr1);
		}
		int count = 0;
		bool fGPRS = false;
		for (auto i : tokens)
		{
			if (i == "GPRS")
			{
				fGPRS = true;
			}
		}
	}
}