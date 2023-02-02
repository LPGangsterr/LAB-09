#include <iostream>
using namespace std;
main()
{
	int currency[4];
	float Quarters;
	float Dimes;
	float Nickels;
	float Pennies;
	float Total;
	float Required;
	cout  <<  "Enter required amount for purchase: ";
	cin  >>  Required;
	cout  <<  "Enter Quarters: ";
	cin  >>  currency[0];
	cout  <<  "Enter Dimes: ";
	cin  >>  currency[1];
	cout  <<  "Enter Nickels: ";
	cin  >>  currency[2];
	cout  <<  "Enter Pennies: ";
	cin  >>  currency[3];
	Quarters = currency[0] * 0.25;
	Dimes = currency[1] * 0.10;
	Nickels = currency[2] * 0.05;
	Pennies = currency[3] * 0.01;
	Total = Quarters + Dimes + Nickels + Pennies;
	if(Required <= Total)
	{
		cout  <<  "True";
	}
	else
	{
		cout  <<  "False";
	}
}
