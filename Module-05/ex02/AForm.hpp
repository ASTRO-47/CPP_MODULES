#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:
    const std::string name;
    const int required_grade_2_excute;
    const int required_grade_2_sign;
    bool signed_;
public:
    AForm();
    AForm(std::string name_, int to_sign, int to_excute);
    AForm &operator=(const AForm &other);
    AForm(const AForm &other);

    std::string getName() const;
    bool get_status() const;
    int get_r_sign() const;
    int get_r_excute() const;

    void beSigned(const Bureaucrat &bur);

    // the excute function
    virtual void execute(Bureaucrat const & executor) const = 0;
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
    class NotSignedForm : std::exception 
    {
    public:
        const char * what () const throw();
    } ;

    virtual ~AForm();
} ; 

std::ostream& operator<<(std::ostream &out, const AForm &f);