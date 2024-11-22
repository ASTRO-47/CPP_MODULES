#include "Account.hpp"
# include <iostream>
# include <ctime>


void    print_time()
{
    std::time_t curremt_time = std::time(NULL);
    struct tm* local_time = std::localtime(&curremt_time);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);
    std::cout << buffer <<std::endl;
}

int     Account::getNbAccounts()
{

    return (0);
}