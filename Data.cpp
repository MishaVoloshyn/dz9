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

int Data::EnterDay(Data userDate)
{
    int d;
    switch (userDate.mounth)
    {
    case 1:  //January31
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 31)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 31);
        return d;
        break;

    case 2:  //February28
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 28)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 28);
        return d;
        break;

    case 3:  //March31
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 31)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 31);
        return d;
        break;

    case 4:  //April30
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 30)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 30);
        return d;
        break;

    case 5:  //May31
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 31)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 31);
        return d;
        break;

    case 6:  //June30
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 30)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 30);
        return d;
        break;

    case 7:  //July31
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 31)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 31);
        return d;
        break;

    case 8:  //August31
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 31)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 31);
        return d;
        break;

    case 9:  //September30
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 30)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 30);
        return d;
        break;

    case 10:  //October31
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 31)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 31);
        return d;
        break;

    case 11:  //November30
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 30)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 30);
        return d;
        break;

    case 12:  //December31
        do {
            cout << "Enter day in month!" << endl;
            cin >> d;
            if (d > 31)
            {
                cout << "NO!" << endl;
            }
        } while (d <= 0 || d > 31);
        return d;
        break;
    }
}

void Data::CompareDate(Data userDate)
{
    switch (userDate.mounth)
    {
    case 1:  //January31
        if (this->day > 31)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;
    case 2:  //February28
        if (this->day > 28)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }

        break;

    case 3:  //March31
        if (this->day > 31)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 4:  //April30
        if (this->day > 30)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 5:  //May31
        if (this->day > 31)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth - 1;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->mounth--;
            this->mounth += 12;
        }
        break;

    case 6:  //June30
        if (this->day > 30)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 7:  //July31
        if (this->day > 31)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 8:  //August31
        if (this->day > 31)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 9:  //September30
        if (this->day > 30)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 10:  //October31
        if (this->day > 31)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 11:  //November30
        if (this->day > 30)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;

    case 12:  //December31
        if (this->day > 31)
        {
            this->mounth++;
            this->day = this->day - 31;
        }
        if (this->mounth > 12)
        {
            this->year + 1;
            this->day = this->mounth - 12;
        }
        if (this->day < 1 || this->day == 0)
        {
            this->mounth--;
            Day(userDate);
        }
        if (this->mounth < 1)
        {
            this->year - 1;
            this->mounth += 12;
        }
        break;
    }
}

void Data::Day(Data userDate)
{

    switch (userDate.mounth)
    {
    case 1:    //31
        this->day += 31;
        break;
    case 2:    //28
        this->day += 28;
        break;
    case 3:    //31
        this->day += 31;
        break;
    case 4:    //30
        this->day += 30;
        break;
    case 5:    //31
        this->day += 31;
        break;
    case 6:    //30
        this->day += 30;
        break;
    case 7:    //31
        this->day += 31;
        break;
    case 8:    //31
        this->day += 31;
        break;
    case 9:    //30
        this->day += 30;
        break;
    case 10:   //31
        this->day += 31;
        break;
    case 11:   //30
        this->day += 30;
        break;
    case 12:   //31
        this->day += 31;
        break;
    }
}

Data& Data::operator+(int x)
{
    day = day + x;
    return *this;
}

Data& Data::operator-(int x)
{
    day = day - x;
    return *this;
}

Data& Data::operator++()
{
    this->day++;
    return *this;
}

Data& Data::operator--()
{
    this->day--;
    return *this;
}

Data& Data::operator++(int x)
{
    Data temp(*this);
    this->day++;
    return temp;
}

Data& Data::operator--(int x)
{
    Data temp(*this);
    this->day--;
    return temp;
}

Data& Data::operator+=(int x)
{
    this->day += x;
    return *this;
}

Data& Data::operator-=(int x)
{
    this->day -= x;
    return *this;
}

bool Data::operator>(Data& other)
{
    return (this->day > other.day && this->mounth > other.mounth && this->year > other.year);
}

bool Data::operator<(Data& other)
{
    return (this->day < other.day && this->mounth < other.mounth && this->year < other.year);
}

bool Data::operator==(Data& other)
{
    return (this->day == other.day && this->mounth == other.mounth && this->year == other.year);
}

bool Data::operator!=(Data& other)
{
    return (this->day != other.day && this->mounth != other.mounth && this->year != other.year);
}




