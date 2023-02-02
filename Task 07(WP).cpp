#include <iostream>
using namespace std;
main()
{
	string word;
	char letter;	
	bool Found = false;
	cout  <<  "Enter any word: ";
	cin  >>  word;
	cout  <<  "Enter a single letter: ";
	cin  >>  letter;
	for(int i = 0;word[i] != '\0';i++)
	{
		if(word[i] ==  letter)
		{
			Found = true;
			break;
		}
	}
	if(Found == true)
	{
		cout  <<  letter  <<  " is found in "  <<  word  <<  ".";
	}
	else if(Found == false)
	{
		cout  <<  letter  <<  " is not found in "  <<  word  <<  ".";
	}
}