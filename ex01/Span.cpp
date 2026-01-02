#include "Span.hpp"

Span::Span() : _N(0)
{
	// std::cout << "Span: Default constructor called" << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{
	// std::cout << "Span: Default constructor called" << std::endl;
}

Span::~Span()
{
	// std::cout << "Span: Destructor called" << std::endl;
}

Span::Span(const Span &other)
{
	// std::cout << "Span: Copy constructor called" << std::endl;
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	// std::cout << "Span: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_N = other._N;
		this->_vector = other._vector;
		// Copy members here
	}
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_vector.size() >= this->_N)
		throw SpanIsFullException();
	_vector.push_back(n);

}

int	Span::shortestSpan()
{
	if 	(this->_N <= 1)
		throw NotEnoughNbException();
	std::vector<int> tmp = _vector;
		std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}
int	Span::longestSpan()
{
	if 	(this->_N <= 1)
		throw NotEnoughNbException();
	std::vector<int> tmp = _vector;
		std::sort(tmp.begin(), tmp.end());
		return (tmp[tmp.size() - 1] - tmp[0]);
}

const char	*Span::SpanIsFullException::what() const throw()
{
	return ("Container is full");
}

const char *Span::NotEnoughNbException::what() const throw()
{
	return ("Needs more than 1 number for Span");

}