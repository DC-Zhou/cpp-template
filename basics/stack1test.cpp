#include <iostream>
#include <string>
#include "stack1.hpp"

int main()
{
	Stack<int> intStack;
	Stack<std::string> stringStack;
	
	inStack.push(7);
	std::cout<< intStack.top() << "\n";

	stringStack.push("hello");
	std::cout<< stringStack.top() <<"\n";
	stringStack.pop();
}
