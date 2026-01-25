#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T,C>
{
private:

public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);

	typedef typename C::iterator			iterator;
	typedef typename C::const_iterator		const_iterator;
	typedef typename C::reverse_iterator		reverse_iterator;
	typedef typename C::const_reverse_iterator	const_reverse_iterator;

	iterator begin();
	iterator end();

	const_iterator begin() const;
	const_iterator end() const;

	reverse_iterator rbegin();
	reverse_iterator rend();

	const_reverse_iterator rbegin() const;
	const_reverse_iterator rend() const;

};

#include "MutantStack.tpp"

#endif
