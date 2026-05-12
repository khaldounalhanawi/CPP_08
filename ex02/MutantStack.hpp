/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 10:40:52 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/12 10:43:48 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	private:
		// nix

	public:
		typedef typename std::stack<T, Container>::container_type::iterator			iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator	const_iterator;

		iterator		begin()			{ return (this->c.begin()); };
		const_iterator	begin() const	{ return (this->c.begin()); };
		iterator		end()			{ return (this->c.end()); };
		const_iterator	end() const		{ return (this->c.end()); };
};
