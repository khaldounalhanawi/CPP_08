/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:21:52 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/08 15:54:42 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	{
		std::vector<int> a;

		a.push_back(5);
		a.push_back(3);
		a.push_back(0);
		a.push_back(1);
		std::cout << ::easyfind(a, 0) << std::endl;
	}

	{
		std::list<int> a;

		a.push_back(5);
		a.push_back(3);
		a.push_back(0);
		a.push_back(1);
		std::cout << ::easyfind(a, 0) << std::endl;
	}

	{
		std::list<char> a;

		a.push_back('s');
		a.push_back('a');
		a.push_back('m');
		a.push_back('f');
		std::cout << ::easyfind(a, 'f') << std::endl;
	}

	{
		std::list<char> a;

		a.push_back('s');
		a.push_back('a');
		a.push_back('m');
		a.push_back('f');
		try {std::cout << ::easyfind(a, 'o') << std::endl;}
		catch (...) {std::cout<< "Well caught, no match!" << std::endl;}
	}

	return (0);
}
