#include <iostream>
using namespace std;
main()
{
	string word;
	cout  <<  "Enter any word: ";
	cin  >>  word;
	for(int i = 0;word[i] != '\0';i++)
	{
		cout  <<  "word["  <<  i  <<  "]"  <<  " is the index of "  <<  word[i]  <<  "."  <<  endl;
	}
}