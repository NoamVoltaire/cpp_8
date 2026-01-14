#ifndef EASYFIND_HPP
#define EASYFIND_HPP

// #include <cstddef>
#include <iostream>
#include <exception>
#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Not found");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int nb)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), nb);
	{
		if (it == container.end())
			throw NotFoundException();
	}
	return (it);
}

// template <typename A, typename L>
// void	iter(A *array, const L len, void (*f)(A &))
// {
// 	size_t 	i = 0;
		
// 	while (array[i] && i < len)
// 	{
// 		f(array[i]);
// 		i++;
// 	}
// }

// template <typename E>
// void	plus_one(E &elem)
// {
// 	elem += 1;
// };

// template <typename E>
// void	print_elems(E &elem)
// {
// 	std::cout << elem << " ";

// }
#endif
