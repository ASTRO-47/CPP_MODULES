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
    std::string str_value;
    double value;
    if (!file.is_open())
        throw std::runtime_error("can't open database file");
    // std::getline(file , line, '\n');
    while (std::getline(file, line))
    {
        std::istringstream ss(line);

        std::getline(ss, date, ',');
        std::getline(ss, str_value, ',');

        value = std::stod(str_value);
        ss >> value;
        history[date] = value;
    }
    for (std::map<std::string , double>::iterator it = history.begin(); it != history.end();it++)
    {
        std::cout << it->first << "," << it->second << std::endl;
    }
}


BitcoinExchange::~BitcoinExchange(){}