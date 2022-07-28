#include <type_traits>

template<template T1, template T2>
auto max (T1 a, T2 b) -> typename std::decay<decltype(true? a:b)>::type
{
	return b < a ? a : b;
}

