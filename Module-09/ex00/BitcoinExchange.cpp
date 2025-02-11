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


void BitcoinExchange::load_data_base()
{
    std::ifstream data("data.csv");
    if (!data.is_open())
        throw std::runtime_error("can't open database file");
    std::string line;
    std::string date;
    double value;
    if (!std::getline(data, line)) // to skip the first line in the database
        throw std::runtime_error("an error occured while parsing the database!!");
    while (std::getline(data, line))
    {
        std::istringstream ss(line);
        if (!std::getline(ss, date, ','))
            throw std::runtime_error("an error occured while parsing the database!!");
        std::cout.precision(15);
        if (!(ss >> value))
            throw std::runtime_error("an error occured while parsing the database!!");
        history[date] = value;
    }
    // for(std::map<std::string , double>::iterator it = history.begin();it != history.end();it++)
    // {
    //     std::cout << it->first << "," << it->second << std::endl;
    // }
    data.close();
}

void BitcoinExchange::parse_input_file()
{
    std::ifstream data(input_file);
    if (!data.is_open())
        throw std::runtime_error("can't open the input file");
    std::string line;
    std::string date;
    std::string pipe;
    double value;
    if (!(getline(data, line)))
        throw std::runtime_error("an error occured while parsing the input file!!");
    if (line != "date | value")
        throw std::runtime_error("the input file must be start with the format \"date | value\"");
    while (std::getline(data, line))
    {
        std::istringstream ss(line);
        if (!(ss >> date)) // parse the date
            throw std::runtime_error("an error occured while parsing the input file!!");
        // Parse pipe separator
        if (!(ss >> pipe))
            throw std::runtime_error("an error occured while parsing the input file!!");
        // Parse value
        if (!(ss >> value))
            throw std::runtime_error("an error occured while parsing the input file!!");

        // std::cout << date << " | "  << value << std::endl;        // history[date] = value;
    }
}



BitcoinExchange::~BitcoinExchange()   {}