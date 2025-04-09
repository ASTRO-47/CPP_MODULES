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
    for (size_t i = 0;i < _str.length(); i++)
    {
        if (!i && _str[i] == '+')
            continue ;
        if (_str[i]  == '0' && (i != 0 || (_str[i]))) // add the condition here
            Error_msge("ERROR");
    }
    return true;
}

long long RPN::parse_calculate()
{
    if (_str.empty())
        Error_msge("Error");
    std::istringstream ss(_str);

    std::string _geter;
    while (getline(ss, _geter, ' '))
    {
        if (_geter.length() == 1 && its_Op(_geter[0]))
        {
            puts("its op");
            // switch (_geter[0])
            // {
            //     case '+':
            //         puts("plus");
            //         break ;
            //     case '-':
            //         puts("minus");
            //         break ;
            //     case '*':
            //         puts("multi");
            //         break ;
            //     case '/':
            //         puts("div");
            // }
        }
        else
        {
            if (checker(_geter))
                Error_msge("ERROR");
            char *att = NULL;
            int res = std::strtod(_geter.c_str(), &att);
            if (att[0] != '\0')
                Error_msge("ERROR");
            std::cout << res << std::endl;
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