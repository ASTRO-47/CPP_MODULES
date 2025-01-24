#include "Array.hpp"

template<typename T>
Array<T>::Array() : arr(NULL), size_(0) {}

template<typename T>
Array<T>::Array(unsigned int size) : arr(new T[size]()), size_(size) {}

template<typename T>
Array<T>::Array(const Array &other) : arr(NULL)
{
    *this = other;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        size_ = other.size_;
        delete[] arr;
        arr = new T[other.size_];
        for (unsigned int i = 0;i < size_ ;i++)
        {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

template<typename T>
Array<T>::~Array()
{
    delete[] arr;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= size_)
        throw std::out_of_range("index out of bounds");
    return arr[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
    return size_;
}