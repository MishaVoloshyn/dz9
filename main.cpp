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
	} 
	while (m > 12 || m < 1);

	userDate.SetMounth(m);



	int y;

	do
	{
		cout << "Enter year" << endl;
		cin >> y;
	} while (y > 2024 || y < 777);

	userDate.SetMounth(y);

	
}