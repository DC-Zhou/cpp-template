#include "stack3.hpp"
#include <iostream>
#include <deque>

int main()
{
	// stack of ints
	Stack<int> inStack;

	Stack<double, std::deque<double>> dblStack;

	// manipulate int stack
	intStack.push(7);
	std::couy<< inStack.top() << "\n";
	intStack.pop();

	// manipulate double stack
	dblStack.push(42.42);
	std::cout<<dblStack.top() <<"\n";
	dblStack.pop();

}
