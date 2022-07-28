template<typename T>
class Stack{
	private:
		std:deque<T> elems;
	public:
		void push(T const&);
		void pop();
		T const& top() const;
		bool empty() const {
			return elems.empty();
		}

	// assign stack of elements of type T2
	template<typename T2>
	Stack& operator= (Stack<T2> const&);
	// to get access to private members of Stack<T2> for ant type T2;
	template<typename> friend class Stack;
};
