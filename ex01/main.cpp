/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:02:04 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/09 17:02:05 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <utility>

int	main()
{
	{
		Span	a(6);

		a.addNumber(0);
		a.addNumber(5);
		a.addNumber(5);
		a.addNumber(50);
		a.addNumber(50);
		a.addNumber(1992);
		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}
		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}
		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}

		std::cout << "longest span:  " <<a.longestSpan() << std::endl;
		std::cout << "shortest span:  " <<a.shortestSpan() << std::endl;
		
		a.printAll ();
	}

	{
		Span	a(4);

		a.addNumber(0);
		a.addNumber(15);
		a.addNumber(-5);
		a.addNumber(50);
		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}
		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}

		std::cout << "longest span:  " <<a.longestSpan() << std::endl;
		std::cout << "shortest span:  " <<a.shortestSpan() << std::endl;
		
		a.printAll ();
	}

	{
		Span	a(1);

		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}
		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}

		try { std::cout << "longest span:  " <<a.longestSpan() << std::endl; }
		catch (const std::exception &e){ std::cout << e.what() << std::endl;}

		try { std::cout << "shortest span:  " <<a.shortestSpan() << std::endl; }
		catch (const std::exception &e){ std::cout << e.what() << std::endl;}
		
		
		a.printAll ();
	}

	{
		Span	a(0);

		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}
		try { a.addNumber(1992); } catch (const std::exception &e){ std::cout << e.what() << std::endl;}

		try { std::cout << "longest span:  " <<a.longestSpan() << std::endl; }
		catch (const std::exception &e){ std::cout << e.what() << std::endl;}

		try { std::cout << "shortest span:  " <<a.shortestSpan() << std::endl; }
		catch (const std::exception &e){ std::cout << e.what() << std::endl;}
		
		
		a.printAll ();
	}

	{
		Span	a(2);
		int		array[] = {4,1,7,4};

		a.addNumber(array, array + 2);
		a.printAll ();
	}

	{
		Span	a(5);
		int		array[] = {4,1,7,4};
		int			*nn = NULL;

		try { a.addNumber(array, nn); }
		catch (const std::exception &e) { std::cout<< e.what() << std::endl;}
		a.printAll ();
	}

	{
		Span	a(11);
		int		array[] = {4,1,7,4};

		try { a.addNumber(array, array + 4); }
		catch (const std::exception &e) { std::cout<< e.what() << std::endl;}
		a.printAll ();
	}

	{
		std::list<int> ls;
		Span			a(2);

		ls.push_back (5);
		ls.push_back (15);
		ls.push_back (-5);
		ls.push_back (50);

		try { a.addNumber(ls.begin(), ls.end()); }
		catch (const std::exception &e) {std::cout << e.what() << std::endl;}

		a.printAll ();
	}

	{
		std::list<int> ls;
		Span			a(4);

		ls.push_back (5);
		ls.push_back (15);
		ls.push_back (-5);
		ls.push_back (50);

		a.addNumber(ls.begin(), ls.end());

		std::cout << "longest span:  " <<a.longestSpan() << std::endl;
		std::cout << "shortest span:  " <<a.shortestSpan() << std::endl;

		a.printAll ();
	}

	// {
	// 	std::vector<int> v(4400, 5);
	// 	Span	a(4400);

	// 	a.addNumber (v.begin(), v.end());
	// 	a.printAll ();
	// }
	return (0);
}
