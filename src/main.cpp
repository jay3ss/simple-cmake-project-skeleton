#include <iostream>
#include "plt/square.h"


int main()
{
	int num;	
	std::cout << "Enter a number to square: ";
	std::cin >> num;

	std::cout << "The square of " << num << " is " << plt::square(num);

	return 0;
}
