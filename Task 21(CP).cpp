#include <iostream>
using namespace std;
main()
{
	int number[2];
	for(int i = 0;i < 2;i++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  number[i];
	}
	int index;
	cout  <<  "Enter any amount of numbers for second arrray: ";
	cin  >>  index;
	int numbers[index];
	for(int j = 0;j < index;j++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  numbers[j];
	}
	for(int k = 0;k < index;k++)
	{
		cout  <<  number[k]  <<  endl;
		for(int l = 0;l < index;l++)
		{
			cout  <<  numbers[l]  <<  endl;
		}
		cout  <<  number[k+1];
		break;
	}
}