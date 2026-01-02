#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>

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


		class SpanIsFullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

#endif
