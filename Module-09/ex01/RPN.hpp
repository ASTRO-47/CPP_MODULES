#pragma once

#include<iostream>
#include<stack>
#include<sstream>

class RPN
{
private:
    std::string         _str;
    std::stack<int>     _numbs;
    RPN();
    bool                its_Op(char) const;
    void                Error_msge(const std::string);
    bool                checker(std::string);
    void                apply_operator(char);
    std::string         _str_geter() const;
    std::stack<int>     _numbs_geter() const;
public:
    RPN(const RPN &);
    RPN& operator=(const RPN &);
    RPN(const std::string);
    long long parse_calculate();

    ~RPN();
} ;