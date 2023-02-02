#include <iostream>
using namespace std;
main()
{
	int index;
	int Sum = 0;
	int Average;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	int numbers[index];
	for(int i = 0;i < 5;i++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  numbers[i];
	}
	for(int j = 0;j < index;j++)
	{
		Sum = Sum + numbers[j];
	}
	Average = Sum / index;
	cout  <<  "Sum is "  <<  Sum  <<  "."  <<  endl;
	cout  <<  "Average is "  <<  Average  <<  "."  <<  endl;
}