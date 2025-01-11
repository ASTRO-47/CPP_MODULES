#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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


    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException()
        {
            std::cout << "in the constructor of too high\n";
        }
        ~GradeTooHighException() throw ()
        {
            std::cout << "in the destrcutor of too high\n";
        }
        const char * what ()  const throw() ;
    } ;

    class GradeTooLowException: public std::exception
    {
    public:
        GradeTooLowException()
        {
            std::cout << "in the constructor of too low\n";
        }
        ~GradeTooLowException() throw()
        {
            std::cout << "in the destructor of too low\n";
        }
        GradeTooLowException(const GradeTooLowException &other)
        {
            std::cout << "copy conctructor\n";
        }
        const char * what () const throw();
    } ;

    std::string getName() const;
    int getGrade() const;
    void upgrade();
    void downgrade();
    ~Bureaucrat();
} ;

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other); // print the burea name and grade and return the stream

#endif