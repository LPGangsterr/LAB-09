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
		count = count + 1;
	}
	for(int j = count;j >= 0;j--)
	{
		cout  <<  word[j];
	}
}