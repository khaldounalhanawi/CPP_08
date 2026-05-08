#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
	private:
		int				*_array;
		unsigned int	_size;
		unsigned int	_pos;

	public:
		Span (const unsigned int N);
		Span (Span const &copy);// TODO
		~Span ();

		// Operator overrides
		Span &operator=(Span const &source); //TODO

		// Setters & Getters
		unsigned int	getSize() const;

		// Member functions
		void	addNumber(const int input);
		void	printAll() const;
		int		shortestSpan() const;
		int		LongestSpan() const;

};

#endif

/*
Develop a Span class that can store a maximum of N integers.

N is an unsigned int variable and will be the only parameter passed to the constructor.

> This class will have a member function called addNumber() to add a single number to the Span. It will be used in order to fill it.

** Any attempt to add a new element if there are already N elements stored should throw an exception.

> Next, implement two member functions: shortestSpan() and longestSpan()
They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. 

*If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.

Of course, you will write your own tests, and they will be far more thorough than the
ones below. Test your Span with at least 10,000 numbers. More would be even better.

Last but not least, it would be wonderful to fill your Span using a range of iterators.
Making thousands of calls to addNumber() is so annoying. Implement a member function
to add multiple numbers to your Span in a single call.
*/