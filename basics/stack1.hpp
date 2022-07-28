#include <vector>
#include <cassert>

template<typename T>
class Stack{
	public:
		void push(T const& elem);  // push element
		void pop();
		T const& top() const;
		bool empty() const {
			return elems.empty();
		}
	private:
		std::vector<T> elems;    // elements
};

template<typename T>
void Stack<T>::push (T const& elem)
{
	elems.push_back(elem);   // append copy oof passed elem
}

template<typename T>
void Stack<T>::pop()
{
	assert(! empty());
	elems.pop_back();
}

template<typename T>
T const& Stack<T>::top () const
{
	assert(! elems.empty());
	return elems.back();
}
