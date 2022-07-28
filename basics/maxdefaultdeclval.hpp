#include <utility>

template<typename T1, typename T2, typename RT = std::decltype_t<decltype(true ? std::decltype<T1>() : std::decltype<T2>())>>
RT max(T1 a, T2 b)
{
	return b < a ? a : b;
}
