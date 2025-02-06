#pragma once
#include <iostream>
#include <vector>

template <typename T>
int &easyfind(T& container, int value)
{
    typename T::iterator arg = std::find(container.begin(), container.end(), value);
    if (arg == container.end())
        throw std::runtime_error("element not found in the container");
    return *arg;
}
