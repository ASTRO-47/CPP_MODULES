#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

template <typename T>
class MutantStack
{
private:
    std::stack<T, std::deque<T> >  my_stack;
public:
    MutantStack(){};
    MutantStack(const MutantStack &other){
        *this = other;
    };
    MutantStack<T>& operator=(const MutantStack &other){
        if(this != &other)
        {
            // do some thind to copy
            
        }
    };

    void push(T arg) {
        my_stack.push_back(arg);
    };
    void pop(){

    };
    size_t size() const{
        return my_stack.size();
    };

    ~MutantStack(){};
};