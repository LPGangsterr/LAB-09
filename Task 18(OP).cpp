#include <iostream>
using namespace std;
main()
{
    	int number;
    	int count = 0;
    	int num1;
	int num2 = 0;
    	cout << "Enter a Range: ";
    	cin >> number;
    	for(int i = 0;i < number;i++)
    	{
        	cout << "Enter any number: ";
        	cin >> num1;     
        	if(num1 > num2)
        	{
            		num2 = num1;
        	}
        	else if(num2 == 0)
		{
            		num2 = num1;
        	}
    	}
    	cout  <<  num2;
}