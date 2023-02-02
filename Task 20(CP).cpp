#include <iostream>
using namespace std;
main()
{
	int index;
	float series = 0;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	float RES[index];
	for(int i = 0;i < index;i++)
	{
		cout  <<  "Enter resistance's value: ";
		cin  >>  RES[i];
	}
	for(int j = 0;j < index;j++)
	{
		series = series + RES[j];
	}
	cout  <<  "Value of resistances in series is "  <<  series  <<  " ohms. "  <<  endl;
}