#include "Span.hpp"

int	main(void)
{
	Span sp(3);

	try
	{
		sp.addNumber(0);
		sp.addNumber(1);
		sp.addNumber(11);

		sp.addNumber(100);
		std::cout << "addNumber() succes!" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
}