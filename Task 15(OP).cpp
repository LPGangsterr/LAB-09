#include <iostream>
using namespace std;
main()
{
	int index;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	int numbers[index];
	for(int i = 0;i < index;i++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  numbers[i];
	}
	for(int j = index;j >= 0;j--)
	{
		cout  <<  numbers[j]  <<  endl;
	}
}