#include <iostream>
#include "prime.h"


int main()
{
	using std::cout;
	using std::cin;
	int userChoice=0;
	cout<<"What would you like to do?\n\n"<<"list Mersenne primes [1] or list all primes [2]\n";
	cin>>userChoice;
	if(userChoice==1)
	{
		/*cout<<"\nI'm sorry, this mode is not yet finished. Please select another mode.\n\n\n";
		main();*/
		mersenne();
		return 0;
	}
	if(userChoice==2)
	{
		allPrimes();
		return 0;
	}
	else
	{
		cout<<"\n"<<userChoice<<" is not a valid choice. Please choose again.";
		main();
	}
}