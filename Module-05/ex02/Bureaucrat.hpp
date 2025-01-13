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
    Bureaucrat();
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);

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

    void signForm(const AForm &form) const;
    std::string getName() const;
    int getGrade() const;
    void upgrade();
    void downgrade();

    void executeForm(AForm const & form) const;

    ~Bureaucrat();
} ;

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other); // print the burea name and grade and return the stream

#endif