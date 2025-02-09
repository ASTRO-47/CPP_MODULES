#include "BitcoinExchange.hpp"

#include <cmath>


int main(int ac, char *argv[])
{
    if (ac != 2)
    {
        std::cerr << "invalid argument number\n";
        return (1);
    }
    BitcoinExchange btc(argv[1]);
    try
    {
        btc.load_data_base();
    }
    catch (std::exception &e)
    {
        std::cout << "failed:  " << e.what() << std::endl;
    }
}