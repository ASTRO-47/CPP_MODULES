#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string m): input_file(m) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{

}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &other)
{
    return *this;
}

void BitcoinExchange::open_files()
{

}

void BitcoinExchange::load_data_base()
{
    std::ifstream data("data.csv");
    if (!data.is_open())
        throw std::runtime_error("can't open database file");
    std::string line;
    std::string date;
    double value;
    while (std::getline(data, line))
    {
        std::istringstream ss(line);
        if (std::getline(ss, date, ','))
            return 
        std::cout.precision(15);
        ss >> value;
        history[date] = value;
    }
    data.close();
}

BitcoinExchange::~BitcoinExchange()   {}