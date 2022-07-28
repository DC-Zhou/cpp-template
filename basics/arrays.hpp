#include <iostream>

template<typename T>
struct MyClass;

template<typename T, std::size_t SZ>
struct MyClass<T[SZ]>		// partial spec. for arrays of known bounds
{
	static void print() { std::cout << "print() for T["<< SZ <<"] \n"; }
};

template<typename T, std::size_t SZ>
struct MyClass<T(&)SZ>		// partial spec. for references to arrays of known bounds
{
	static void print() { std::cout << "print() for T(&)[" << SZ << "] \n"; 	}
};

template<typename T>
struct MyClass<T[]>			// partial spec. for arrays of unknown bounds
{
	static void print() { std::cout << "print() for T[] \n"; }
};

template<typename T>
struct MyClass<T(&) []>		// partial spec. for references to arrays of unknown bounds
{
	static void print() { std::cout<< "print() for T(&)[] \n"; }
};

template<typename T>
struct MyClass<T*>			// partial spec. for points
{
	static void print() { std::cout<< "print() for T* \n";}
};


