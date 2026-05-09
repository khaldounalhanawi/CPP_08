#include "Span.hpp"
#include <iostream>
#include <vector>
#include <utility>

void	tester(std::vector<std::pair<std::pair<int, int>, std::vector<int> > > dataSet)
{
	for (int i = 0; i < static_cast<int>(dataSet.size()); i ++)
	{
		int		shortest = (dataSet.at(i)).first.first;
		int		longest = (dataSet.at(i)).first.second;
		int		localLen = (dataSet.at(i)).second.size();

		Span				mySpan(localLen);
		std::vector<int>	localVector = (dataSet.at(i)).second;

		for (int k = 0; k < localLen; k ++)
		{
			mySpan.addNumber(localVector.at(k));
		}

		if (mySpan.shortestSpan() != shortest)
		{
			std::cout << "Incorrect shortest span! = ";
			std::cout <<  mySpan.shortestSpan() << "\n";
			mySpan.printAll();
			continue ;
		}
		if (mySpan.longestSpan() != longest)
		{
			std::cout << "Incorrect longest span!\n@ ";
			mySpan.printAll();
			continue ;
		}
		std::cout << "Test " << i << " has succeded!\n";
	}
}

int	main()
{
	std::vector<std::pair<std::pair<int, int>, std::vector<int> > > dataSet =
	{
		{ {5, 50},		{0,50,10,5} },
		{ {0, 0},		{0, 0, 0, 0} },
		{ {0, 50},		{0, 50, 50, 0} },
		{ {0, 50},		{0, 50, 50, 50} },
		{ {0, 100},		{0, 50, 50, -50} },
		{ {0, 50},		{0, 50, 50} },
		{ {10, 20},		{10, 0, 20} },
		{ {1, 9},		{1, 2, 10} },
		{ {1, 99},		{100, 1, 2, 3, 4, 5} },
		{ {1, 1000},	{1000, 0, 999, 1} },
		{ {1, 100},		{0, 100, 50, 51, 52} },
		{ {1, 100},		{100, 99, 98, 97, 0} },
		{ {2, 6},		{2, 4, 6, 8} },
		{ {1, 1000000},	{0, 1, 1000000} }
	};

	tester(dataSet);

	return (0);
}




