#include <iostream>
using namespace std;
main()
{
	int index;
	int number;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	int numbers[index];
	for(int i = 0;i < index;i++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  numbers[i];
	}
	cout  <<  "Enter any number for testing: ";
	cin  >>  number;
	for(int j = 0;j < index;j++)
	{	
		if(numbers[j]  ==  number)
		{
			cout  <<  "Already Entered.";
		}
	}
}