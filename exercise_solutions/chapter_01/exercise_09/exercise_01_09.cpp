// Sums the numbers from 50 to 100 by the use of a while loop

#include <iostream>

int main()
{
	int sum = 0;
	int startNumber = 50;
	int endNumber = 100;
	int currentNumber = startNumber;

	while (currentNumber <= endNumber) {
		sum += currentNumber;
		++currentNumber;
	}

	std::cout << "The sum of " << startNumber << " to " << endNumber
			  << ", inclusive, is " << sum;

	return 0;
}
