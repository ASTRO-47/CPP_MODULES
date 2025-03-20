#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string m): input_file(m) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}
    
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        //
    }
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
    {
        data.close();   
        throw std::runtime_error("an error occured while parsing the database!!");
    }
    while (std::getline(data, line))
    {
        std::istringstream ss(line);
        if (!std::getline(ss, date, ','))
        {
            data.close();
            throw std::runtime_error("an error occured while parsing the database, or the file is empty!!");
        }
        std::cout.precision(15);
        if (!(ss >> value))
        {
            data.close();
            throw std::runtime_error("an error occured while parsing the database!!");
        }
        history[date] = value;
    }
    data.close();
}

bool leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
}

void check_numerics(std::string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (!std::isdigit(s[i]))
            throw std::runtime_error("bad input");
    }
}
void BitcoinExchange::check_date_validity_2()
{
    if (year < 2009 || month > 12 || month < 1 || day > 31 || day < 1)
        throw std::runtime_error("bad input");
    int _days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leap_year(year))
        _days[1] = 29;
    if (_days[month - 1] < day)
        throw std::runtime_error("bad input");
}

void BitcoinExchange::check_date_validity(std::string date)
{
    std::istringstream _date(date);
    std::string  _year, _month, _day;
    if (!getline(_date, _year, '-') || !getline(_date, _month, '-') || !getline(_date, _day))
        throw std::runtime_error("bad input");
    check_numerics(_year);
    check_numerics(_month);
    check_numerics(_day);
    year = std::strtod(_year.c_str(), NULL);
    month = std::strtod(_month.c_str(), NULL);
    day = std::strtod(_day.c_str(), NULL);
    check_date_validity_2();
}

void    BitcoinExchange::check_date(std::string date)
{
    if (date.length() != 10)
        throw std::runtime_error("bad input");
    int dash = 0;
    for (int i = 0; i < 10 ; i++)
    {
        if (!isdigit(date[i]) && (date[i] == '-' && (i != 4 && i != 7)))
            throw std::runtime_error("bad input");
        if (date[i] == '-')
        {
            if (dash > 1)
                throw std::runtime_error("bad input");
            dash++;
        }
    }
    check_date_validity(date);
}

void BitcoinExchange::parse_value(std::string _value)
{
    if (!_value.length()) // nan no passable, inf, two pipes
        throw std::runtime_error("bad input");
    char *res = NULL;
    value = std::strtod(_value.c_str(), &res);
    if (strlen(res))
        throw std::runtime_error("bad input");
    if (value < 0)
        throw std::runtime_error("not a positive number");
    if (value > 1000)
        throw std::runtime_error("too large number");
}

bool just_white_spaces(const std::string str) 
{
    if (str.empty())
       return true;
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (!std::isspace(static_cast<char>(*it)))
            return false ;
    }
    return true;
}

void        BitcoinExchange::look_for_value()
{
    puts("hello world");
    if (!history.size())
        return ;
    std::map<std::string , double>::iterator it = history.lower_bound(date);
    if (it == history.end() && it->first != date)
        it--;
    std::cout <<  date << " => " << value << " = " << it->second * value << std::endl;
    
}

void BitcoinExchange::parse_input_file()
{
    std::ifstream data(input_file);
    std::string remain;
    if (!data.is_open())
        throw std::runtime_error("can't open the input file");
    std::string line;
    std::string pipe;
    std::string _value;
    if (!(getline(data, line)))
    {
        data.close();
        throw std::runtime_error("an error occured while parsing the input file, or its empty!!");
    }
    if (line != "date | value")
    {
        data.close();
        throw std::runtime_error("the input file must be start with the format \"date | value\"");
    }
    while (std::getline(data, line))
    {
        if (!line.length() || just_white_spaces(line))
            continue ;
        std::istringstream ss(line);
        ss >> date;
        try
        {
            check_date(date);
        }
        catch (const std::exception& e)
        {
            std::cerr << "ERROR: " << e.what() <<  " => \""<< line << "\"" << '\n';
            continue ;
        }
        ss >> pipe; // need to protect this later champ
        if (pipe.length() != 1 || pipe[0] != '|')
        {
            std::cerr << "ERROR: bad input" << " => \""<< line << "\"" << '\n';
            continue;
        }
        if (ss >> _value)

        try 
        {
            parse_value(_value);
        }
        catch (const std::exception& e)
        {
            std::cerr <<"ERROR: " << e.what() <<  " => \""<< line << "\"" << '\n';
            continue ;
        }
        if (getline(ss, remain))
        {
            if (!just_white_spaces(remain))
            {
                std::cerr <<"ERROR: " << "bad input" <<  " => \""<< line << "\"" << '\n';
                continue ;
            }
        }
        puts("here");
        look_for_value();
    }
    data.close();
}

BitcoinExchange::~BitcoinExchange()
{
    history.clear();
}