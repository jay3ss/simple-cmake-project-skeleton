#include <iostream>
#include "plt/square.h"


int main()
{
	int num;	
	std::cout << "Enter a number to square: ";
	std::cin >> num;

	//int square = plt::square(num);

	//std::cout << "The square of " << num << " is " << square;
	std::cout << "The square of " << num << " is " << plt::square(num);

	return 0;
}
