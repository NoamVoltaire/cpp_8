#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::~Span()
{
}

Span::Span(const Span &other) : _N(other._N) ,_vector(other._vector)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_vector = other._vector;
	}
	return *this;
}

void	Span::addNumber(const int n)
{
	if (this->_vector.size() >= this->_N)
		throw SpanIsFullException();
	_vector.push_back(n);

}

void	Span::addNumber(const std::vector<int>::iterator begin, const std::vector<int>::iterator end)
{
	if (this->_vector.size() + std::distance(begin, end) > this->_N)
		throw SpanIsFullException();
	_vector.insert(_vector.end(), begin, end);

}

int	Span::shortestSpan()const
{
	if 	(this->_vector.size() <= 1)
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
int	Span::longestSpan()const
{
	if 	(this->_vector.size() <= 1)
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
