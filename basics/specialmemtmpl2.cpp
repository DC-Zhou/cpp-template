#include <utility>
#include <string>
#include <iostream>

class Person{
	private:
		std::string name;
	public:
		// generic constructor for passed initial name
		template<typename STR>
		explicit Person(STR&& n) : name(std::forward<STR>(n)) {
			std::cout << "TMP-CONSTR for '" << name <<"'\n";
		}

		// copy and move constructor
		Person (Person const& p) : (p.name) {
			std::cout << "COPY-CONSTR Person '" << name << "'\n";
		}
		Person (Person&& p) : name(std::move(p.name) {
			std::cout << "MOVE-CONSTR Person '" << name << "'\n";
		}
};

int main()
{
	std::string s = "sname";
	Person p1(s);
	Person p2("tmp");

	Person P3(p1);		// Error;
	Person P4(std::move(p1))	// OK
	
	Person const p2c("ctmp");	// init const object with string literal
	Person p3c(p2c);			// OK: copy constant Person => calls COPY-CONSTR;

}
