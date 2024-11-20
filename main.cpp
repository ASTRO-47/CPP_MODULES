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
    // employee (std::string Name , int age, std::string Company)
    // {
    //     name = Name;
    //     Age = age;
    //     company = Company;
    // }
    employee()
    {
        std::cout << "constructor\n";
    }
    ~employee()
    {
        puts("deconstructor");
    }
    void    anoonce(void){
        puts("this is me");
    }
};
void    f(void)
{
    system("leaks a.out");
}
int main()
{
    atexit(f);
    employee employee1 = employee();
    employee employee2;
    employee1.anoonce();
    char *d = new char[5];
    d[0] = 'h';
    d[1] = 'e';
    d[2] = '\0';
    std::cout << d;
    puts("\ndone");
//     employee1.introduce();
//     employee2.introduce();
}