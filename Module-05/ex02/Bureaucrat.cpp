#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("undefined"), grade(10) {}

Bureaucrat::Bureaucrat(const std::string name, int grade_) : name(name), grade(grade_)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
        // throw std::exception();
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
    grade--;
}

void Bureaucrat::downgrade()
{
    if (grade + 1  > 150)
        throw GradeTooLowException();
    grade++;
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

void Bureaucrat::signForm(const AForm &form) const 
{
    if (form.get_status())
        std::cout << "Bureaucrat " << getName() << " signed the Form\n";
    else
        std::cout << "Bureaucrat " << getName() << "coutld not sign the Form because of his low grade\n";
}

void Bureaucrat::executeForm(AForm const & form) const
{
    if (getGrade() <= form.get_r_excute())
        std::cout << getName() <<  "executed" << form.getName() << std::endl;
    else
        std::cerr <<getName() << "grade too low to execute the " << form.getName() << std::endl;
}