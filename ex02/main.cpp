/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 10:40:47 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/12 10:43:39 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <deque>
#include <list>

int main()
{
	{
		MutantStack<char>	a;

		a.push ('f');
		a.push ('k');
		a.push ('e');
		a.push ('d');
	
		std::cout << *a.begin() << "\n";
		std::cout << *(a.end() - 1);
	}

	std::cout <<"\n********************************\n";

	{
		MutantStack<char, std::list<char> >	a;

		a.push ('f');
		a.push ('k');
		a.push ('e');
		a.push ('d');
	
		typedef MutantStack<char, std::list<char> >::container_type::iterator myIter;

		for (myIter i = a.begin(); i != a.end(); i ++)
			std::cout << *i << "\n";
	}

	return (0);
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);

// 	mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;

// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}

// 	std::stack<int> s(mstack);
// 	return (0);
// }


// int main()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);

// 	std::cout << mstack.front() << std::endl;
// 	mstack.pop_front();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);

// 	mstack.push_back(0);

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;

// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}

// 	std::stack<int, std::list<int> > s(mstack);
// 	return (0);
// }

// does it support lists??

// how to achieve the ::iterator?

// what are iterator functions inside vectors/containers

// next mechanism for stack?