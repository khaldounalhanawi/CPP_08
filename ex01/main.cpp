#include "Span.hpp"
#include <iostream>

int	main()
{
	Span	a(3);

	a.addNumber(12);
	a.addNumber(45);
	// a.addNumber(52);
	// a.addNumber(1992);

	a.printAll ();



	return (0);
}