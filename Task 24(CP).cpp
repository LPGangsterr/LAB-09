#include <iostream>
using namespace std;
main()
{
	string statement;
	cout  <<  "Enter any statement: ";
	getline(cin,statement);
	for(int i = 0;statement[i] != '\0';i++)
	{
		if(statement[i]  ==  'a'  ||  statement[i]  ==  'e'  ||  statement[i]  ==  'i'  ||  statement[i]  ==  'o'  ||  statement[i]  ==  'u'  ||  statement[i]  ==  'A'  ||  statement[i]  ==  'E'  ||  statement[i]  ==  'I'  ||  statement[i]  ==  'O'  ||  statement[i]  ==  'U')
		{
			continue;
		}
		cout  <<  statement[i];
	}
}