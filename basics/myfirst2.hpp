#ifndef MYFIRST_HPP
#define MYFIRST_HPP

#include <iostream>
#include <typeinfo>

// declaration of template
template<typename T>
void priintTypeof(T const&x);

// implementation / definition of template
template<typename T>
void printTypeof (T const& x)
{
	std::cout << typeif(x).name() << "\n";
}

#endif // MYFIRST_HPP
