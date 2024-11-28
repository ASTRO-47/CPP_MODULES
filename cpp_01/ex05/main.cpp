
#include "Harl.hpp"

int Harl::hello = 0;

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "invalid number of argument" << std::endl, 1);
    Harl client;
    client.complain(av[1]);
    int *y =  &(client.hello);
    (*y)++;
    puts("hello");
}