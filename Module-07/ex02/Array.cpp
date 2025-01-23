#include "Array.hpp"
template <typename T>


Array<T>::Array()
{
    arr = new T[];
    std::cout << "defautl constructor for Array called\n";
}
