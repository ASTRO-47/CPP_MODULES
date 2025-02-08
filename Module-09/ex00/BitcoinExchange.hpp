#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>

class BitcoinExchange
{
private:
    std::map<std::string, float> history;
    std::string input_file;
    BitcoinExchange();
public:
    BitcoinExchange(std::string);
    BitcoinExchange(const BitcoinExchange &);
    BitcoinExchange& operator=(const BitcoinExchange &);

    // open the  files
    void open_files();
    void load_data_base();
    ~BitcoinExchange();
} ; 