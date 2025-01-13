#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_) : AForm("Shrubbery", 145, 137), target(target_) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
    *this = other;
} 

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        // target = other.target;
        AForm::operator=(other);
    }
    return *this;
}

// need implementation for excute

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    // checking the grade first
    if (!get_status())
        throw AForm::NotSignedForm();
    if (executor.getGrade() > get_r_excute())
        throw GradeTooLowException();
    std::ofstream file(this->target + "_shrubbery");
    if (!file.is_open())
    {
        std::cerr << "failt to open the file\n";
        return ;
    }
    file << "           # #### ####\n";
    file << "        ### \\/#|### |/####\n";
    file << "       ##\\/#/ \\||/##/_/##/_#\n";
    file << "     ###  \\/###|/ \\/ # ###\n";
    file << "   ##_\\_#\\_\\## | #/###_/_####\n";
    file << "  ## #### # \\ #| /  #### ##/##\n";
    file << "   __#_--###`  |{,###---###-~\n";
    file << "               |HH|{\n";
    file << "               |HH|\n";
    file << "               |HH|\n";
    file << "               |HH|\n";
    file << "        , -=-~{ .-^- _\n";
    file << "              `}\n";
    file << "               {";
    file.close();
}