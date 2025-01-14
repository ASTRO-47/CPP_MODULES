#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int required_grade_2_excute;
    const int required_grade_2_sign;
    bool signed_;
public:
    Form();// default
    Form(std::string name_, int to_sign, int to_excute);
    Form &operator=(const Form &other);
    Form(const Form &other);

    std::string getName() const;
    bool get_status() const;
    int get_r_sign() const;
    int get_r_excute() const;

    void beSigned(const Bureaucrat &bur);

    class GradeTooHighException: public std::exception 
    {
    public:
        const char * what() const throw();
    } ;

    class GradeTooLowException: public std::exception 
    {
    public:
        const char * what() const throw();
    } ;

    ~Form();
} ; 

std::ostream& operator<<(std::ostream &out, const Form &f);