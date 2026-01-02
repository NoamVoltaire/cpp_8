#include "Span.hpp"

int	main(void)
{
	Span sp(3);

		sp.addNumber(0);
		sp.addNumber(1);
		sp.addNumber(11);
	try
	{
		sp.addNumber(100);
		// std::cout << "addNumber() succes!" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;

}