#include "Span.hpp"
#include <iostream>

// ________________________ Constructors / destructor ________________________ //

Span::Span(const unsigned int N) :
_size(N),
_pos(0)
{
	this->_array = new int [N]();
}

// Span::Span(const Span& other)
// {
// }

Span::~Span()
{
	delete [] this->_array;
}

// ________________________ Operator overloads ________________________ //

// Span& Span::operator=(const Span& source)
// {
// 	return *this;
// }

// ________________________ Setter & Getters ________________________ //

unsigned int	Span::getSize() const
{
	return (this->_size);
}

// ________________________ Member functions ________________________ //

void	Span::addNumber(const int input)
{
	if (_pos < _size)
	{
		_array[_pos] = input;
		_pos ++;
	} 
	else
		std::cout<< "Throw exception!" << std::endl;
}

void	Span::printAll() const
{
	std::cout<< "All:\n";
	for (unsigned int i = 0; i < _size; i ++)
		std::cout << this->_array[i] << std::endl;
	std::cout<< "*****" << std::endl;
}

int	Span::shortestSpan() const
{

}

// ________________________ Exception functions ________________________ //


// ________________________ Helper functions ________________________ //


/*
> This class will have a member function called addNumber() to add a single number to the Span. It will be used in order to fill it.

** Any attempt to add a new element if there are already N elements stored should throw an exception.
*/