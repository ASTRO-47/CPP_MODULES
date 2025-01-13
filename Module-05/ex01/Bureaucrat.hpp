#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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

    void signForm(Form &form);
    std::string getName() const;
    int getGrade() const;
    void upgrade();
    void downgrade();

    ~Bureaucrat();
} ;

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other); // print the burea name and grade and return the stream

#endif