#include <iostream>

class employee {
public :
    std::string name;
    std::string company;
    int Age;

    void    introduce()
    {
        std::cout << "my name is " << name << " and i am " << Age << " yo " << "and i am working on " <<  company << "\n";
    
    }
    employee (std::string Name , int age, std::string Company)
    {
        name = Name;
        Age = age;
        company = Company;
    }
};

int main()
{
    employee employee1("imad", 30, "facebook");
    employee employee2("john", 25, "amazon");
    employee1.introduce();
    employee2.introduce();
}