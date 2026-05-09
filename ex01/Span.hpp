#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span
{
	private:
		std::vector<int>	_data;
		unsigned int		_capacity;
		unsigned int		_counter;

	public:
		Span (const unsigned int N);
		Span (Span const &copy);// TODO
		~Span ();

		// Operator overrides
		Span &operator=(Span const &source); //TODO

		// Setters & Getters
		unsigned int	getCapacity() const;

		// Member functions
		void	addNumber(const int input);
		template <typename genericIterator>
		void	addNumber(genericIterator start, genericIterator end);
		void	printAll() const;
		int		shortestSpan() const;
		int		longestSpan() const;
};

# include "addNumber.tpp"

#endif
