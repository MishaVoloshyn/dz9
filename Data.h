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
	int EnterDay(Data userDate);
	void CompareDate(Data userDate);

	Data& operator+(int x);
	Data& operator-(int x);

	Data& operator++();
	Data& operator--();

	Data& operator++(int x);
	Data& operator--(int x);


	Data& operator+=(int x);
	Data& operator-=(int x);



	void Day(Data data);

	bool operator>(Data& other);
	bool operator<(Data& other);
	bool operator==(Data& other);
	bool operator!=(Data& other);
};