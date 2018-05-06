// Reads a set of book sales transactions and echoes each transaction to the
// standard output

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item;
	while (std::cin >> item) {
		std::cout << item << std::endl;
	}

	return 0;
}
