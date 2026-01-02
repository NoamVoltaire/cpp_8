#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	// std::cout << "MutantStack: Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	// std::cout << "MutantStack: Destructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other)
{
	// std::cout << "MutantStack: Copy constructor called" << std::endl;
	// *this = other;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
	std::cout << "MutantStack: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		std::stack<T>::operator=(other);
	}
	return *this;
}
