#include "Span.hpp"

template <typename genericIterator>
void	Span::addNumber(genericIterator start, genericIterator end)
{
	if (std::distance (start, end) > this->_capacity)
	{
		std::cout	<< "Span object is too small for the provided range!"
					<< std::endl;
		return ;
	}
	for (genericIterator i = start; i != end; i ++)
		this->addNumber (*i);
};