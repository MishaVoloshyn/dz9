#include "Data.h"
#include <iostream>
using namespace std;

Data::Data()
{
	this->day = 0;
	this->mounth = 0;
	this->year = 0;
}

Data::Data(int day, int mounth, int year)
{
	this->day = day;
	this->mounth = mounth;
	this->year = year;
}

Data::~Data()
{
}

void Data::SetDay(int d)
{
	this->day = d;
}
void Data::SetMounth(int m)
{
	this->mounth = m;
}
void Data::SetYear(int y)
{
	this->year = y;
}

int Data::GetDay()
{
	return this->day;
}


int Data::GetMounth()
{
	return this->mounth;
}


int Data::GetYear()
{
	return this->year;
}

void Data::Print()
{
	cout << "Print" << endl;
	cout << "Day: " << day << "  Mounth: " << mounth << "  Year: " << year << endl;
}

void Data::CompareData()
{
}
