#include "Fraction.h"
#include <iostream>

int main()
{
	Math::Fraction fraction1{ 10, 5 };

	std::cout << fraction1.compute();

	return EXIT_SUCCESS;
}