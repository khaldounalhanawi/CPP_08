/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:12:16 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/09 19:12:17 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Span (Span const &copy);
		~Span ();

		// Operator overrides
		Span &operator=(Span const &source);

		// Setters & Getters
		unsigned int			getCapacity() const;
		unsigned int			getCounter() const;
		const std::vector<int>	&getData() const;

		// Member functions
		void	addNumber(const int input);
		void	addNumber(int *start, int *end);
		template <typename genericIterator>
		void	addNumber(genericIterator start, genericIterator end);
		void	printAll() const;
		int		shortestSpan() const;
		int		longestSpan() const;
};

# include "addNumber.tpp"

#endif
