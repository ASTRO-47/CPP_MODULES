#pragma once

// template are used and determined at compile time 
// 4. Non-Type Template Parameters

#include <iostream>

template <typename T>
class Array
{
private:
    //
    T   *arr;
    unsigned int size_;
public:
    Array() : arr(NULL), size_(0) {}
    Array(unsigned int size) : arr(new T[size]), size_(size) {}
    Array(const Array &other) : arr(NULL)
    {
        *this = other;
    }

    Array<T>&   operator=(const Array &other)
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

    T&  operator[](unsigned int index)
    {
        if (index >= size_)
            throw std::out_of_range("index out of bounds");
        return arr[index];
    }

    const T& operator[](unsigned int index) const
    {
        if (index >= size_)
            throw std::out_of_range("index out of bounds");
        return arr[index];
    }

    unsigned int    size() const
    {
        return size_;
    }

    ~Array()
    {
        delete[] arr;
    }
} ;

