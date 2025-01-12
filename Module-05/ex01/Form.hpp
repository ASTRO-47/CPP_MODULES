#pragma once

#include "Bureaucrat.hpp"

class Form
{
private:
    bool signed_;
    const std::string name;
    const int required_grade_2_sign;
    const int required_grade_2_excute;
    Form();
public:
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