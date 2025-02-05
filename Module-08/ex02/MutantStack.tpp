#pragma once
#include <cstdio>
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
    //
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    MutantStack() : std::stack<T>() {};
    MutantStack(const MutantStack &other){
        *this = other;
    };

    MutantStack<T>& operator=(const MutantStack &other)
    {
        if(this != &other)
            std::stack<T>::operator=(other);
    }

    const_iterator begin() const {puts("const"); return this->c.begin(); }
    const_iterator end() const {puts("not const"); return this->c.end(); }
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end();}
    ~MutantStack(){};
};
