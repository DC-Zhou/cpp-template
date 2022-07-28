#include <utility>
#include <functional>

template<typename Callable, typename... Args>
decltype(auto) call(Callable&& op, Args&&... args)
{
	return std::invoke(std::forward<Callbale>(op), std::forward<Args>(args)...);
}


