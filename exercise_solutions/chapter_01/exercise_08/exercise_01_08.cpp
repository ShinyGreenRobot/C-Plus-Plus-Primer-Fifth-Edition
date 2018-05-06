// Investigation about if some output statements with comments are legal or

#include <iostream>

int main()
{
	// prints /*
	std::cout << "/*";

	// prints */
	std::cout << "*/";

	// next print statement does not compile
	// unclear what was intended to be printed so will not attempt to correct it
	// std::cout << /* "*/" */;

	// prints a space followed by /* and then another space
	std::cout << /*  "*/" /* "/*"  */;

	return 0;
}
