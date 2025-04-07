#include "RPN.hpp"

RPN::~RPN() {}
RPN::RPN() {}

RPN::RPN(const std::string _exp) :_str(_exp) {}

bool RPN::its_Op(char c) const
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

long long RPN::parse_calculate()
{
    std::cout << "stack size :" << _numbs.size() << std::endl;
    for (size_t i = 0; i < _str.length(); i++)
    {
        if (std::isspace(_str[i]))
            i++;
        if (its_Op(_str[i]))
        {
            switch (_str[i])
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
        else
        {
            std::cout << _str[i] << std::endl;
        }
        
    }
    return 0;
}