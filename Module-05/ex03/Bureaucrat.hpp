#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    const std::string name;
    int grade; // 150 <= grade <= 1 // meed to throw an exception about the high or low grade
public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);

    // exectption classes
    class GradeTooHighException : public std::exception
    {
    public:
        const char * what ()  const throw();
    } ;

    class GradeTooLowException: public std::exception
    {
    public:
        const char * what () const throw();
    } ;
    // geters
    std::string getName() const;
    int getGrade() const;

    // update the grade
    void upgrade();
    void downgrade();

    // form functions
    void signForm(AForm &form) ;
    void executeForm(AForm const & form) const;

    // destructor
    ~Bureaucrat();
} ;

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other); // print the burea name and grade and return the stream

#endif