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
        if (!std::isdigit(m[i]) && m[i] != '.')
            return false;
    }
    return true;
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

bool check_int(std::string m)
{
    int j  = 0;
    if (m[0] == '-' || m[0] == '+')
        j++;
    for (int i=j;i < m.length();i++)
    {
        if (!std::isdigit(m[i]))
            return false;
    }
    return true ;

}

bool check_char(std::string m)
{
    if (m.length() != 1)
        return false;
    for (int i=0;i < m.length();i++)
    {
        if (!std::isalpha(m[i]))
            return false;
    }
    return true ;
}

void print_result(checker *my_checker)
{
    std::cout << "Int: " ;
    if (my_checker->int_ < std::numeric_limits<int>::min() || my_checker->int_ > std::numeric_limits<int>::max())
        std::cout << "Impossible\n";
    else
        std::cout << my_checker->int_ << std::endl;
    std::cout  << "char: ";
    if (!std::isprint((my_checker->char_)) || my_checker->char_check)
        std::cout << "Non displayable\n";
    else if (static_cast<int>(my_checker->char_) > 31 && static_cast<int>(my_checker->char_) < 127)
        std::cout << "'"<<   (my_checker->char_) << "'" << std::endl;
    else
        std::cout << "Impossible\n";
    std::cout << "float: " ;
    if (my_checker->digit_)
        std::cout << std::fixed << std::setprecision(1) << my_checker->float_ << "f\n";
    else
        std::cout << my_checker->float_ << "f\n";
    std::cout << "Double: " ;
    std::cout  << my_checker->double_ << "\n";
}

bool double_check(std::string m)
{
    if (check_nums(m) == false)
        return false;
    char *end = NULL;
    double first_conversion = std::strtod(m.c_str(), &end);
    if (first_conversion != -1 && !strlen(end))
        return true;
    return false;
}

bool float_check(std::string m)
{
    char *end = NULL;
    double first_conversion = std::strtod(m.c_str(), &end);
    if (first_conversion != -1 && strcmp(end, "f"))
        return true;
    return false;
}

void customize_print(void)
{
    std::cout << "Int : Impossible\n" ;
    std::cout << "Char: Impossible\n" ;
    std::cout << "float : nanf\n" ;
    std::cout << "double : nan\n" ;
}

void customize_inf(std::string m)
{
    std::cout << "Int : Impossible\n" ;
    std::cout << "Char: Impossible\n" ;
    std::cout << "float :" ;
    std::cout << m[0] << "inff" << std::endl;
    std::cout << "double :" ;
    std::cout << m[0] << "inf" << std::endl;
}

void ScalarConverter::convert(std::string m)
{
    checker my_checker = {0,0,0,0,0,0};
    char     *p_checker;

    if (m == "nan" || m == "nanf")
        return (customize_print());
    if (m == "-inf" || m == "+inf")
        return (customize_inf(m));
    if (check_int(m))// checke if int 
    {
        puts("in int");
        my_checker.digit_= true;
        my_checker.char_check = true;
        my_checker.double_ = std::strtod(m.c_str(), &p_checker);
        my_checker.int_ = static_cast<int> (my_checker.double_);
        my_checker.char_ = static_cast<char>(my_checker.int_);
        my_checker.float_ = my_checker.int_;
    }
    else if (check_char(m)) // check if char
    {
        puts("in char");
        my_checker.digit_= true;
        my_checker.char_check = true;
        my_checker.char_ = m[0];
        my_checker.double_ = static_cast<double> (my_checker.char_);
        my_checker.int_ = static_cast<int> (my_checker.char_);
        my_checker.float_ = my_checker.int_;
    }
    else if (float_check(m))
    {
        puts("in float");
        my_checker.char_check = false;
        my_checker.float_ = std::strtod(m.c_str(), NULL);
        my_checker.double_ = static_cast<double> (my_checker.float_);
        my_checker.int_ = static_cast<int> (my_checker.float_);
    }
    else if (double_check(m))
    {
        puts("in double");
        my_checker.char_check = false;
        my_checker.double_ = std::strtod(m.c_str(), NULL);
        my_checker.float_ = static_cast<float> (my_checker.double_);
        my_checker.int_ = static_cast<int> (my_checker.double_);
    }
    else
    {
        std::cout << "unknowen type\n";
        return ;
    }
    print_result(&my_checker);
    // else if () // check if double or float
    // else // "unknown type"
 
    // if (m.length() == 1)
    //     return (handle_one_char(&my_checker, m));

    // if (m.length() > 1 && m[m.length() - 1]  == 'f' ) // there is a problem with one char ,fix it
    //     m.pop_back();
    // std::cout << "this is the first step to make a good impact\n";
    // std::cout << "Int: ";
    // float i_cast = handle_int(m);
    // // std::cout << i_cast << std::endl;
    // if ((i_cast == -1 && m != "-1") || (i_cast > 2147483647 || i_cast < -2147483648))
    //     std::cout << "Impossible\n";
    // else
    //     std::cout << static_cast<int> (i_cast) << std::endl;
    // std::cout << "Char: ";
    // if (!std::isprint(static_cast<char>(i_cast)))
    //     std::cout << "Non displayable\n";
    // else if (i_cast > 31 && i_cast < 127)
    //     std::cout << "'"<<  static_cast<char> (i_cast) << "'" << std::endl;
    // else
    //     std::cout << "Impossible\n";
    // std::cout << "float: " ;
    // // std::cout << std::numeric_limits<float>::min();
    // if ((i_cast == -1 && m != "-1") || (i_cast < std::numeric_limits<float>::min() || i_cast > std::numeric_limits<float>::max()))
    //     std::cout << "Impossible\n";
    // else
    // {
    //     // if (m.length() == 1)
    //     //     std::cout << std::fixed << std::setp<< static_cast<float> (i_cast) << 'f' << std::endl;
    //     std::cout << static_cast<float> (i_cast) << 'f' << std::endl;

    // }
    // std::cout << "double: ";
    // if (!check_nums(m) && m.length() > 25)
    // if ()
    //     std::cout << "Impossible\n";
    
}

// ana = not a number