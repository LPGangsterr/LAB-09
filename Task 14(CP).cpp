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
		if(word[i]  ==  'a'  ||word[i]  ==  'e'  ||word[i]  ==  'i'  ||word[i]  ==  'o'  ||word[i]  ==  'u')
		{
			count  =  count + 1;
		}
	}
	cout  <<  "Number of vowels: "  <<  count;
}