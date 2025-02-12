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

// void check_date_elements(std::string &date)
// {
//     for (int i = 0; i < 10 ; i++)
//     {
//         if (!isdigit(date[i]) && date[i] != '-')
//             return false;
//     }
//     return true;
// }

void check_numerics(std::string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (!std::isdigit(s[i]))
            throw std::runtime_error("INVALID FORMAT");
    }
}
void check_date_validity_2(int year, int month, int day)
{
    if (year < 2009 || month > 12 || month < 1)
        throw std::runtime_error("INVALID FORMAT");
    int _days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // if ()
}

void check_date_validity (std::string date)
{
    std::istringstream _date(date);
    std::string  year, month, day;
    if (!getline(_date, year, '-') || !getline(_date, month, '-') || !getline(_date, day))
        throw std::runtime_error("INVALID FORMAT");
    check_numerics(year);
    check_numerics(month);
    check_numerics(day);
    // std::cout << year << std::endl << month << std::endl << day << std::endl;   // print the holl date
    int _year, _month, _day;
    _year = std::strtod(year.c_str(), NULL);
    _month = std::strtod(month.c_str(), NULL);
    _day  = std::strtod(day.c_str(), NULL);
    check_date_validity_2(_year, _month, _day);
}

void    check_date(std::string date)
{
    if (date.length() != 10)
        throw std::runtime_error("INVALID FORMAT");
    int dash = 0;
    for (int i = 0; i < 10 ; i++)
    {
        if (!isdigit(date[i]) && (date[i] == '-' && (i != 4 && i != 7)))
            throw std::runtime_error("INVALID FORMAT");
        if (date[i] == '-')
        {
            if (dash > 1)
                throw std::runtime_error("INVALID FORMAT");
            dash++;
        }
    }
    check_date_validity(date);
}
void BitcoinExchange::parse_input_file()
{
    std::ifstream data("input.txt");
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
        if (!(ss >> date))   // parse the date
            throw std::runtime_error("an error occured while parsing the input file!!");
        try
        {
            check_date(date);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() <<  " :---->\"   "<< date << "\"" << '\n';
            break ;
        }
        
        // if (!check_data(date))
        // {
        //     std::cout << "INVALID FORMAT: "  << "\""<< line << "\""<< std::endl;
        //     continue;
        // }
        // Parse pipe separator
        if (!(ss >> pipe))
            throw std::runtime_error("an error occured while parsing the input file!!"); // stack unwding will handle the file stream
        // Parse value
        if (!(ss >> value))
            throw std::runtime_error("an error occured while parsing the input file!!");

        // std::cout << date << " " << pipe << " " << value << std::endl;        // history[date] = value;
        break;
    }
}



BitcoinExchange::~BitcoinExchange()   {}