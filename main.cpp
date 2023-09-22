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

	
}