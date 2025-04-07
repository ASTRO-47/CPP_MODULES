#pragma once

#include<iostream>
#include<stack>
#include<sstream>

class RPN
{
private:
    std::string _str;
    std::stack<int> _numbs;
    RPN();
    bool    its_Op(char) const;
public:
    RPN(const std::string);
    long long parse_calculate();
    ~RPN();
} ;