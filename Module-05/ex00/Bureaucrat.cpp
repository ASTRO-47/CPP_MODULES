#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("undefined"), grade(10) // by default no exception needed
{}

Bureaucrat::Bureaucrat(const std::string name, int grade_) : name(name)
{
    if (grade_ < 1)
        throw GradeTooHighException();
    if (grade_ > 150)
        throw GradeTooLowException();
    grade = grade_;
        // throw std::except    ion();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << name << " died \n";
    // nothing to do
}

std::string Bureaucrat::getName() const
{
    return name ;
}

int Bureaucrat::getGrade() const
{
    return grade ;
}

void Bureaucrat::upgrade()
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    
    grade--; // check the condition
    std::cout << grade << std::endl;
}

void Bureaucrat::downgrade()
{
    if (grade + 1  > 150)
        throw GradeTooLowException();
    grade++; // check the condition
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other)
{
    out << other.getName() << ", " << "bureaucrat grade " << other.getGrade();
    return out;
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}