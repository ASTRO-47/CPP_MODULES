#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
    grade = 75;
}

Bureaucrat::Bureaucrat(const std::string name, int grade_) : name(name)
{
    grade = grade_;
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
    grade--; // check the condition
}

void Bureaucrat::downgrade()
{
    grade++; // check the condition
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other)
{
    out << other.getName() << ", " << "bureaucrat grade " << other.getGrade();
    return out;
}