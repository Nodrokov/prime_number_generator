#include <iostream>
#include <math.h>
#include "prime.h"

int mersenne()
{
	long double number=2;
	long double dividend=2;
	long double remainder=1;
	std::cout<<"\nThis Program lists Mersenne Primes up to 600,000.\nPress any key to show the next prime.\n\n";
	while (true)
	{
		if(number==dividend)
		{
			system("pause>nul");
			std::cout<<(pow(2,number)-1)<<"\n";
			if((pow(2,number)-1)==524287)
			{
				system("pause>nul");
				return 0;
			}
			number++;
			dividend=2;
		}
		else
		{
			remainder=fmod(number,dividend);
			if(remainder==0)
			{
				number++;
				dividend=2;
			}
			else
			{
				dividend++;
				
			}
		}
	}
}