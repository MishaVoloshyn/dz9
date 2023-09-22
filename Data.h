#pragma once
class Data
{
private:
	int day;
	int mounth;
	int year;
public:
	Data();
	Data(int day, int mounth, int year);
	~Data();

	void SetDay(int d);
	void SetMounth(int m);
	void SetYear(int y);

	int GetDay();
	int GetMounth();
	int GetYear();

	void Print();
	void CompareData();

	/*Data operator++(int x);
	Data operator--(int x);
	Data operator+(int x);
	Data operator-(int x);
	Data operator+=(int x);
	Data operator-=(int x);


	bool operator>();
	bool operator<();
	bool operator==();
	bool operator!=();*/
};