/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:21:45 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/08 15:58:52 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <exception>
#include <algorithm>

template <typename T>
int	easyfind(const T &container, const int &item)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), item);
	if (it == container.end())
		throw std::exception();
	return (std::distance (container.begin(), it));
}