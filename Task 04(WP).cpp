#include <iostream>
using namespace std;
main()
{
	int numbers[5];
	for(int i = 0;i < 5;i++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  numbers[i];
	}
		cout  <<  "First number is "  <<  numbers[0]  <<  "."  <<  endl;
		cout  <<  "Last number is "  <<  numbers[4]  <<  "."  <<  endl;
}