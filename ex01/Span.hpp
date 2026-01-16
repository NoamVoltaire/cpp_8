#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Span
{
	private:
		unsigned int	_N;
		std::vector<int>	_vector;

	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();


		class SpanIsFullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class NotEnoughNbException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
