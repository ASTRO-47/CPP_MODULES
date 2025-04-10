#include "RPN.hpp"

int main(int ac, char *av[])
{
    // std::cout << av[1] << std::endl;
    if (ac != 2)
        return (std::cerr << "invalid number of args\n", 1);
    RPN _tr(av[1]);
    std::cout << _tr.parse_calculate() << std::endl;
}
