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
    std::string line;
    std::string date;
    std::string str_value;
    double value;
    if (!data.is_open())
        throw std::runtime_error("can't open database file");
    while (std::getline(data, line))
    {
        std::istringstream ss(line);
        std::getline(ss, date, ',');
        // std::getline(ss, str_value, ',');
        // std::cout << str_value << std::endl;
        // value = std::strtod(str_value.c_str(), NULL); // need to know if the data intouchble
        std::cout.precision(15);
        ss >> value;
        // history[date] = value;
        std::cout << value << std::endl;
        std::cout << date << std::endl;
        break ;
    }
    data.close();
}


BitcoinExchange::~BitcoinExchange(){}