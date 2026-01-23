#include "MutantStack.hpp"
#include <list>
#include <stack>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define BLUE    "\033[34m"      /* Blue */

int main()
{
	std::cout << BLUE << "MutantStack test " << RESET << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);



	std::cout << BLUE << "List test " << RESET << std::endl;
	std::list<int> true_list;
	true_list.push_back(5);
	true_list.push_back(17);
	std::cout << true_list.back() << std::endl;
	true_list.pop_back();
	std::cout << true_list.size() << std::endl;
	true_list.push_back(3);
	true_list.push_back(5);
	true_list.push_back(737);
	//[...]
	true_list.push_back(0);
	std::list<int>::iterator itz = true_list.begin();
	std::list<int>::iterator itez = true_list.end();
	++itz;
	--itz;
	while (itz != itez)
	{
		std::cout << *itz << std::endl;
		++itz;
	}

	//std::cout << BLUE << "List test " << RESET << std::endl;
	//MutantStack<long, std::list<long>>
	//std::stack<int> s(true_list);
	return 0;
}

//int main()
//{
//	std::list<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.front() << std::endl;
//	mstack.pop_back();
//	std::cout << mstack.size() << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
//	//[...]
//	mstack.push_back(0);
//	std::list<int>::iterator it = mstack.begin();
//	std::list<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}
//	//std::stack<int> s(mstack);
//	return 0;
//}



// int	main()
// {
// 	MutantStack<int>	ms;

// 	ms.push(3);
// 	ms.push(6);
// 	ms.push(10);
// 	ms.push(21);
// 	ms.push(42);
// 	ms.push(85);
// 	ms.push(99);

// 	std::cout << *ms.begin() << "\n";
// 	std::cout << *ms.rbegin() << "\n";
// }
