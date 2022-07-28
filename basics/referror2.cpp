#include <vector>
#include <iostream>

template<typename T, int& SZ>
class Arr {
	private:
		std::vector<T> elems;
	public:
		Arr() : elems(SZ) {
		}

		void print() const {
			for(int i = 0; i < SZ; ++i)
			{		
				std::cout<< elems[i] << " ";
			}	
		}
};

int size = 20;

int main()
{
	Arr<int&, size> y;		// compile-time Error deep in the code of class std::vector<>

	Arr<int, size> x;		// initializes internal vector with 10 elements
	x.print();				// OK;
	size += 100;			// OOPS: modifies SZ in Arr<>
	x.print();				// run-time Error: invalid memort access: loops over 110 elements

}


