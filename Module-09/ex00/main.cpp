#include "BitcoinExchange.hpp"

#include <cmath>


int main(int ac, char *argv[])
{
    // std::string h = "h53453";
    // std::istringstream hello(h);
    // double val;
    // hello >> val;
    // std::cout << val << std::endl;
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
    try
    {
        btc.parse_input_file();
    }
    catch (std::exception &e)
    {
        std::cout << "failed: "  << e.what() << std::endl;
    }
}