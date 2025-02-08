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
    std::ifstream file("data.csv");
    std::string line;
    std::string date;
    float value;
    if (!file.is_open())
        throw std::runtime_error("can't open database file");
    std::getline(file , line, '\n');
    while (std::getline(file, line))
    {
        std::istringstream ss(line);

        std::getline(ss, date, ',');
        ss >> value;
        // history[date] = value;
        std::cout << value << std::endl;
    }
    // for (std::map<std::string , float>::iterator it = history.begin(); it != history.end();it++)
    // {
    //     std::cout << it->first << ", " << it->second    ;
    // }
}


BitcoinExchange::~BitcoinExchange(){}