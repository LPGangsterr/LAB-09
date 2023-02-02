#include <iostream>
using namespace std;
main()
{
	string word;
	char letter;
	int count = 0;
	cout  <<  "Enter any word: ";
	cin  >>  word;
	cout  <<  "Enter any letter: ";
	cin  >>  letter;
	for(int i = 0;word[i] != '\0';i++)
	{
		count  =  count + 1;
	}
	for(int j = count - 1;j >= count - 1;j--)
	{
		if(word[j]  ==  letter)
		{
			cout  <<  "True";
		}
		else
		{
			cout  <<  "False";
		}
	}
}