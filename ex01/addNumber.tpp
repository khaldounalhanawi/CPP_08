/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addNumber.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:12:09 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/09 19:12:10 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename genericIterator>
void	Span::addNumber(genericIterator start, genericIterator end)
{
	if (static_cast<unsigned int>(std::distance (start, end)) > this->_capacity)
		throw std::runtime_error ("Span object is too small for the provided range!");

	for (genericIterator i = start; i != end; i ++)
		this->addNumber (*i); 
};