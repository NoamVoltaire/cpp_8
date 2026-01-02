#include "MutantStack.hpp"

template <typename T>
MutantStack::MutantStack()
{
	// std::cout << "MutantStack: Default constructor called" << std::endl;
}

template <typename T>
MutantStack::~MutantStack()
{
	// std::cout << "MutantStack: Destructor called" << std::endl;
}

template <typename T>
MutantStack::MutantStack(const MutantStack &other)
{
	// std::cout << "MutantStack: Copy constructor called" << std::endl;
	*this = other;
}

template <typename T>
MutantStack &MutantStack::operator=(const MutantStack &other)
{
	std::cout << "MutantStack: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		std::stack<T>::operator=(other);
	}
	return *this;
}
