#pragma once

#include <cstdio>  //do not forgot this 
#include <iostream>
#include <stack>

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
        return *this;
    }

    const_iterator begin() const {puts(" const for begin"); return this->c.begin(); }
    const_iterator end() const {puts(" const for begin"); return this->c.end(); }
    iterator begin() { puts("no const called for begin");return this->c.begin(); }
    iterator end() { puts("no const called for end");return this->c.end();}

    ~MutantStack(){};
};

