template<typename T, typename Cont = std:;deque<T>>
class Stack{
	private:
		Cont elems;
	
	public:
		void push(T const&);
		void pop();
		T const& top() const;
		bool empty() const {
			return elems.empty();
		}
		// assign stack of elements of type T2
		template<typename T2, typename Cont2>
		Stack& operator= (Stack<T2, Cont2> const&);
		// to get access to private members of Stack<T2> for any type T2
		template<typename, typename> friend class Stack;
};
