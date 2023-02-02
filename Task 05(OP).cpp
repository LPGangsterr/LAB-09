#include <iostream>
using namespace std;
main()
{
	int index;
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
		cout  <<  numbers[j]  <<  endl;
	}
}