#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
    grade = 75;
}

Bureaucrat::Bureaucrat(const std::string name, int grade_) : name(name), grade(grade_)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
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



void Bureaucrat::signForm(const Form &form) const 
{
    if (form.get_status())
        std::cout << "Bureaucrat " << getName() << " signed the Form\n";
    else
        std::cout << "Bureaucrat " << getName() << "coutld not sign the Form because of his low grade\n";
}