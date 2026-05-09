#include "Span.hpp"
#include <iostream>
#include <vector>
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
	return (0);
}
