/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:21:45 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/07 19:22:19 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <exception>

template <typename T>
int	easyfind(const T &container, const int &item)
{
	int	i = 0;

	for (typename T::const_iterator it = container.begin();
		it != container.end(); it++)
	{
		if (*it == item)
			return (i);
		i ++;
	}
	throw std::exception();
}
