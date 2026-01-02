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

const char	*Span::SpanIsFullException::what() const throw()
{
	return ("Container is full");
}