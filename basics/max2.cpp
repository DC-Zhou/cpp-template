// maximum of two int values
int max (int a, int b)
{
	return b < a ? a : b;
}

// maximum of two values of any type:
template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

int main()
{
	::max(7, 42);			//use max1
	::max(7.0, 42.0);		//calls max<double> 
	::max('a', 'b');    	//calls max<char>
	::max<>(7,42);     	  	//calls max<int>
	::max<double>(7, 42); 	//calls max<double>
	::max('a', 42.7);	  	// calls max1
}
