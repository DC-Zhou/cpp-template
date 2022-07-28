
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



// perfect forwarding parameters
template<typename T>
void f(T&& val){
    g(std::forward<T>(val));    // perfect forward val to g();
}

int main()
{   
    X v;
    X const c;
    
    f(v);               // f() for non-constant object calls f(X&) => g(X&)
    f(c);               // f() for constant object calls f(X const&) => calls g(X const&);
    f(X());             // f() for temporary calls f(X&&) ==> calls g(X&&)
    f(std::move(v));    // f() for movable bariable call f(X&&) => calls g(X&&);
}

