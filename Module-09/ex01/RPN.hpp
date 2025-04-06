#pragma once

#include<iostream>
#include<stack>

class RPN
{
private:
    std::string _str;
    std::stack<int> _numbs;
    RPN();
public:
    RPN(const std::string);
    ~RPN();
} ;