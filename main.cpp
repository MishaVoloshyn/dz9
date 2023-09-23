#include "Data.h"

#include <iostream>
using namespace std;


int main() {
	Data userDate;
	userDate.Print();

	int m;
	do
	{
		cout << "Enter month" << endl;
		cin >> m;
	} while (m > 12 || m < 1);
	userDate.SetMounth(m);

	int y;
	do
	{
		cout << "Enter year" << endl;
		cin >> y;
	} while (y > 2024 || y < 777);

	userDate.SetYear(y);

	userDate.SetDay(userDate.EnterDay(userDate));

	userDate.Print();

	++userDate;
	userDate.CompareDate(userDate);
	userDate.Print();
	cout << endl;


	--userDate;
	userDate.CompareDate(userDate);
	userDate.Print();
	cout << endl;


	userDate - 10;
	userDate.CompareDate(userDate);
	userDate.Print();
	cout << endl;

	userDate + 15;
	userDate.CompareDate(userDate);
	userDate.Print();
	cout << endl;


	userDate -= 20;
	userDate.CompareDate(userDate);
	userDate.Print();
	cout << endl;

	userDate += 35;
	userDate.CompareDate(userDate);
	userDate.Print();
	cout << endl;

	Data userDate2(15, 3, 1950);
	userDate2.Print();


	if (userDate > userDate2) {
		cout << "userDate > userDate2" << endl;
	}

	if (userDate < userDate2) {
		cout << "userDate < userDate2" << endl;
	}

	if (userDate == userDate2) {
		cout << "userDate == userDate2" << endl;
	}

	if (userDate != userDate2) {
		cout << "userDate != userDate2" << endl;
	}
}