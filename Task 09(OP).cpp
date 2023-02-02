#include <iostream>
using namespace std;
main()
{
	string word;
	int count = 0;
	cout  <<  "Enter any word: ";
	cin  >>  word;
	for(int i = 0;word[i] != '\0';i++)
	{
		count  =  count + 1;
	}
	if(count % 2 == 0)
	{
		cout  <<  "TRUE.";
	}
	if(count % 2 != 0)
	{
		cout  <<  "FALSE.";
	}
}