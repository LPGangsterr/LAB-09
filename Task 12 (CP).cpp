#include <iostream>
using namespace std;

main()
{
	char alphabets[53] = "abcdefghijklmnopqrstuvwxyz";
    	char character;
    	string word;
    	cout << "Enter a Word: ";
    	cin >> word;
    	for(int i = 0; word[i] != '\0'; i++)
    	{
        	for(int j = 0; alphabets[j] != '\0'; j++)
        	{
            		if(alphabets[j] == word[i])
            		{
                		if(word[i] == 'z')
                		{
                    			cout << alphabets[0];
                		}
                		else
                		{
                    			cout << alphabets[j + 1];
                		}
		            }
        	}
    	}
}