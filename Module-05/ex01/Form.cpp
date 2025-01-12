#include "Form.hpp"

Form::Form(std::string name_, int to_sign, int to_excute) : name(name_), required_grade_2_excute(to_excute), required_grade_2_sign(to_sign),signed_(false)
{
    if (required_grade_2_excute < 1 || required_grade_2_sign < 1)
        throw GradeTooHighException();
    if (required_grade_2_excute > 150 || required_grade_2_excute > 150)
        throw GradeTooLowException();
    std::cout << "new Form for "<< name << " is created\n";
}

Form::Form(const Form & other) : name(other.name), required_grade_2_excute(other.required_grade_2_excute), required_grade_2_sign(other.required_grade_2_sign),signed_(false)
{

}

Form &Form::operator=(const Form & other)
{
    if (this != &other)
    {
        signed_ = other.signed_;
    }
    return *this;
}

std::string Form::getName() const
{
    return name;
}

bool Form::get_status() const
{
    return signed_;
}

int Form::get_r_sign() const
{
    return required_grade_2_sign;
}

int Form::get_r_excute() const
{
    return required_grade_2_excute;
}

void Form::beSigned(const Bureaucrat &bur)
{
    if (bur.getGrade() <= required_grade_2_sign)
    {
        signed_  = true;
        bur.signForm(*this);
    }
    else 
        throw GradeTooLowException();
}




const char * Form::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}


Form::~Form() {}