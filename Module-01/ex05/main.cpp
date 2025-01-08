
#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "invalid number of argument" << std::endl, 1);
    // object on the stack
    Harl client;
    client.complain(av[1]);
}