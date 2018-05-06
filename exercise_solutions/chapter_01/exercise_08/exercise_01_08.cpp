// Investigation about if different output statements are legal or not

#include <iostream>

int main()
{
	// prints /*
	std::cout << "/*";

	// prints */
	std::cout << "*/";

	// next print statement does not compile
	// unclear what was attempted to be printed
	// std::cout << /* "*/" */;

	// prints a space followed by /* and then another space
	std::cout << /*  "*/" /* "/*"  */;

	return 0;
}
