#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);

	std::cout << "Trying span on less than 2 nb \n	";
	try
	{
		sp.shortestSpan();

	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;

	}
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Trying addNumber() when size() == N \n	";
	try
	{
		sp.addNumber(100);
		// std::cout << "addNumber() succes!" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << "\n" << std::endl;
	}

	std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;




	Span sp2 = Span(100000);
	std::vector<int> vec;
	std::srand(time(NULL));
	for (int i = 0; i < 100000; i++)
	{
		
		int random_int = rand() % 1000000000;
		vec.push_back(random_int);
	}

	sp2.addNumber(vec.begin(), vec.end());
	std::cout << "Longest Span : " << sp2.longestSpan() << std::endl;
	std::cout << "Shortest Span : " << sp2.shortestSpan() << std::endl;

}