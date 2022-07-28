#include <utility>
#include <iostream>

class X {
	...
};

void g(X&){
	std::cout << "g() for variable \n";
}

void g(X const&){
	std::cout << "g() for constant \n";
}

void g(X&&) {
	std::cout << "g() for movable objects \n";
}

// let f() forward argument val to g();
void f(X& val){
	g(val);			// val is non-const lvalue => calls g(X&);
}

void f(X const& val){
	g(val);			// val is const lvalue => class g(X const&);
}

void f(X&& val){
	g(std::move(val));			// val is non-const lvalue => needs std::move() to call g(&&)
}


int main()
{
	X v;
	X const c;

	f(v);				// f() for non-constant object calls f(X&) => g(X&)
	f(c);   			// f() for constant object calls f(X const&) => calls g(X const&);
	f(X());				// f() for temporary calls f(X&&) ==> calls g(X&&)
	f(std::move(v));	// f() for movable bariable call f(X&&) => calls g(X&&);
}
