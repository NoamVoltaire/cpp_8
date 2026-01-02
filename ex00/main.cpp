
#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	// Test with std::vector
	std::vector<int> vec;
		vec.push_back(6);
		vec.push_back(7);
		vec.push_back(8);
		vec.push_back(3);
	try {
		std::cout << "Found: " << *easyfind(vec, 7) << " in vector" << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "Found: " << *easyfind(vec, 50) << " in vector" << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test with std::list
	std::list<int> lst;
		lst.push_back(3);
		lst.push_back(7);
		lst.push_back(20);
		lst.push_back(40);
	try {
		std::cout << "Found: " << *easyfind(lst, 20) << " in list" << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "Found: " <<  *easyfind(lst, 60) << " in list" << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}