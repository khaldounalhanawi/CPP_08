/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:11:53 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/09 19:11:54 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

// ________________________ Constructors / destructor ________________________ //

Span::Span(const unsigned int N) :
_capacity(N),
_counter(0)
{
	return ;
}

Span::Span(const Span& other) :
_capacity(other.getCapacity()),
_counter(other.getCounter())
{
	_data = other.getData();
	return ;
}

Span::~Span()
{
	return ;
}

// ________________________ Operator overloads ________________________ //

Span& Span::operator=(const Span& source)
{
	if (this == &source)
		return (*this);
	_data = source.getData ();
	_capacity = source.getCapacity ();
	_counter = source.getCounter ();

	return (*this);
}

// ________________________ Setter & Getters ________________________ //

unsigned int	Span::getCapacity() const
{
	return (this->_capacity);
}

unsigned int	Span::getCounter() const
{
	return (this->_counter);
}

const std::vector<int>	&Span::getData() const
{
	return (this->_data);
}

// ________________________ Member functions ________________________ //

void	Span::addNumber(const int input)
{
	if (_counter < _capacity)
	{
		_data.push_back (input);
		_counter ++;
	} 
	else
		throw std::runtime_error ("Object has no more space");
}

void	Span::printAll() const
{
	unsigned int i = 0;

	std::cout<< "All:\n";
	while (i < _counter)
		std::cout << this->_data.at(i++) << std::endl;
	while (i++ < _capacity)
		std::cout << "[empty]\n";
	std::cout<< "*****" << std::endl;
}

int	Span::longestSpan() const
{
	if (_counter < 2)
		throw std::runtime_error (
			"No span for items with elements'count less than 2");
	int	min = *std::min_element(_data.begin(), _data.end());
	int	max = *std::max_element(_data.begin(), _data.end());
	return (max - min);
}

int	Span::shortestSpan() const
{
	int	span = -1;
	int diff;
	
	if (_counter < 2)
		throw std::runtime_error (
			"No span for items with elements'count less than 2");

	std::vector<int> temp(_data);
	std::sort (temp.begin(), temp.end());

	for (unsigned int i = 0; i < _counter - 1; i ++)
	{
		diff = std::abs(temp.at(i + 1) - temp.at(i));
		if (diff == 0)
			return (0);
		if (i == 0)
			span = diff;
		else if (diff < span)
			span = diff;
	}

	return (span);
}

void	Span::addNumber(int *start, int *end)
{
	if (!start || !end)
		throw std::runtime_error ("Invalid pointer iterator!");

	if (end - start > this->_capacity)
		throw std::runtime_error ("Span object is too small for the provided range!");

	for (int *i = start; i != end; i ++)
	{
		if (!i)
			throw std::runtime_error ("Invalid pointer iterator inside range");
		this->addNumber (*i); 
	}
};
