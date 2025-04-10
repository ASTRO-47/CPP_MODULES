#include "RPN.hpp"

RPN::~RPN() {}

RPN::RPN() {}

RPN::RPN(const std::string _exp) :_str(_exp) {}

RPN::RPN(const RPN &other)
{
    *this = other;
}

std::string RPN::_str_geter() const
{
    return _str;
}

std::stack<int> RPN::_numbs_geter() const
{
    return _numbs;
}

RPN& RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        _str = other._str_geter();
        _numbs = other._numbs_geter();
    }
    return *this;
}

bool RPN::its_Op(char c) const
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void        RPN::Error_msge(const std::string _msge)
{
    std::cerr << _msge << std::endl;
    exit (1);
}

bool    RPN::checker(std::string _str)
{
    size_t j  = 0;
    if (_str[j] == '+')
        j++;
    for (;j < _str.length() && _str[j] == '0'; j++) {}
    if ((std::isdigit(_str[j]) && _str[j + 1] == '\0') || (!_str[j]))
        return true;
    return false;
}

void       RPN::apply_operator(char _op)
{
    if (_numbs.size() <  2)
        Error_msge("ERROR");
    int second = _numbs.top();
    _numbs.pop();
    int first = _numbs.top();
    _numbs.pop();
    int res;
    switch (_op)
    {
        case '+':
            res = first + second;
            break ;
        case '-':
            res = first - second;
            break ;
        case '*':
            res = first * second;
            break ;
        case '/':
            if (!second)
                Error_msge("ERROR: DIVISION BY 0");
            res = first / second;
    }
    _numbs.push(res);
}

long long RPN::parse_calculate()
{
    if (_str.empty())
        Error_msge("Error");
    std::istringstream ss(_str);

    std::string _geter;
    while (getline(ss, _geter, ' '))
    {
        if (!_geter.length())
            continue ;
        if (_geter.length() == 1 && its_Op(_geter[0]))
            apply_operator(_geter[0]);
        else
        {
            if (!checker(_geter))
                Error_msge("ERROR");
            char *att = NULL;
            int res = std::strtod(_geter.c_str(), &att);
            if (att[0] != '\0')
                Error_msge("ERROR");
            _numbs.push(res);
        }
    }
    if (_numbs.size() != 1)
        Error_msge("ERROR");
    return _numbs.top();
}