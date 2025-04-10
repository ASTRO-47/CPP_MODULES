#include "RPN.hpp"

RPN::~RPN() {}

RPN::RPN() {}

RPN::RPN(const std::string _exp) :_str(_exp) {}

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
    if (std::isdigit(_str[j]) && _str[j + 1] == '\0')
        return true;
    return false;
}

void       RPN::apply_operator(char _op)
{
    if (_numbs.size() !=  2)
        Error_msge("ERROR");
    switch (_op)
    {
        case '+':
            puts("plus");
            break ;
        case '-':
            puts("minus");
            break ;
        case '*':
            puts("multi");
            break ;
        case '/':
            puts("div");
    }
}

long long RPN::parse_calculate()
{
    if (_str.empty())
        Error_msge("Error");
    std::istringstream ss(_str);

    std::string _geter;
    while (getline(ss, _geter, ' '))
    {
        std::cout << "array:" << _geter << "]" << std::endl;
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
    // for (size_t i = 0; i < _str.length(); i++)
    // {
    //     if (std::isspace(_str[i]))
    //         continue ;
    //     if (its_Op(_str[i]))
    //     {
    //         }
    //     }
    //     else
    //     {
    //         std::cout << _str[i] << std::endl;
    //     }
        
    // }
    return 0;
}