#include <iostream>
#include <string>
#include "stackauto.hpp"

int main()
{
	Stack<int, 20u>			int20Stack;
	Stack<std::string, 40> 	stringStack;
	
	// manipulate stack of up to 20 ints
	int20Stack.push(7);
	std::cout << int20Stack.top() << "\n";
	auto size1 = int20Stack.size();

	// manipulate stack up to 40 strings
	stringStack.push("hello");
	std::cout << stringStack.top() << "\n";
	auto size2 = stringStack.size();

	if(! std::is_same_v<decltype(size1), decltype(size2)>)
	{
		std::cout << "size type differ" << "\n";
	}
}
