#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <cstring>

class BitcoinExchange
{
private:
    std::map<std::string, double> history;
    std::string input_file;
    std::string date;
    int year;
    int month;
    int day;
    double value;
    BitcoinExchange();
    void check_date_validity_2();
    void check_date_validity(std::string date);
    void check_date(std::string date);
    void parse_value(std::string);
    std::map<std::string, double>::iterator look_for_value();
public:
    BitcoinExchange(std::string);
    BitcoinExchange(const BitcoinExchange &);
    BitcoinExchange& operator=(const BitcoinExchange &);

    // open the  files
    void parse_input_file();
    void load_data_base();
    ~BitcoinExchange();
} ; 