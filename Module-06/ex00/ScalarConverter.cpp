#include "ScalarConverter.hpp"

// for the canonical form

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) 
{
    (void) other;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other) { 
    (void) other;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

bool check_nums(const std::string &m)
{
    for (int i=0;i<m.length();i++)
    {
        if (!std::isdigit(m[i]))
            return 1;
    }
    return 0;
}

double handle_int(std::string m)
{
    // if (m.length() > 12)
    // {
    //     std::cout << "Impossible\n";
    //     return -1;
    // }
    char *check =  NULL;
    float y = std::strtod(m.c_str(), &check);
    if (strlen(check))
        return -1;
    return y;
}

void handle_char(std::string m)
{
    if (m.length() > 3)
    {
        std::cout << "Impossible\n";
        return ;
    }
}
// bool first_check(const std::string &m)
// {
//     if (m == "nan")
//     return true;
// }

// void handle_float(float f)
// {

// }

void ScalarConverter::convert(std::string m)
{
    // make a checker for every possible case , if not print unkwen type
    checker my_checker = {0,0,0,0};

    // here need to add a first checker to pass only the valid string

    if (m.length() == 1)
        return (handle_one_char(&my_checker, m));

    if (m.length() > 1 && m[m.length() - 1]  == 'f' ) // there is a problem with one char ,fix it
        m.pop_back();
    std::cout << "this is the first step to make a good impact\n";
    std::cout << "Int: ";
    float i_cast = handle_int(m);
    // std::cout << i_cast << std::endl;
    if ((i_cast == -1 && m != "-1") || (i_cast > 2147483647 || i_cast < -2147483648))
        std::cout << "Impossible\n";
    else
        std::cout << static_cast<int> (i_cast) << std::endl;
    std::cout << "Char: ";
    if (!std::isprint(static_cast<char>(i_cast)))
        std::cout << "Non displayable\n";
    else if (i_cast > 31 && i_cast < 127)
        std::cout << "'"<<  static_cast<char> (i_cast) << "'" << std::endl;
    else
        std::cout << "Impossible\n";
    std::cout << "float: " ;
    // std::cout << std::numeric_limits<float>::min();
    if ((i_cast == -1 && m != "-1") || (i_cast < std::numeric_limits<float>::min() || i_cast > std::numeric_limits<float>::max()))
        std::cout << "Impossible\n";
    else
    {
        // if (m.length() == 1)
        //     std::cout << std::fixed << std::setp<< static_cast<float> (i_cast) << 'f' << std::endl;
        std::cout << static_cast<float> (i_cast) << 'f' << std::endl;

    }
    std::cout << "double: ";
    // if (!check_nums(m) && m.length() > 25)
    // if ()
    //     std::cout << "Impossible\n";
    
}

// ana = not a number