#include "classes.hpp"

Base::~Base(){};

Base *genrate()
{
    int ran = rand() % 3;
    // std::cout << ran << std::endl;
    if (ran == 0)
        return new A();
    if (ran == 2)
        return new B();
    if (ran == 1)
        return new C();
    return 0;
}

void identify(Base& p) 
{
    try 
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "The reference passed is for an object of type A\n";
        return;
    }
    catch (const std::bad_cast&) {}

    try 
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "The reference passed is for an object of type B\n";
        return;
    }
    catch (const std::bad_cast&) {}

    try 
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "The reference passed is for an object of type C\n";
        return;
    } catch (const std::bad_cast&) {}

}


int main ()
{
    srand(time(0));

    B a;
    Base &ptr = a;
    identify(ptr);
    // for (int i=0;i< 10;i++)
    // {
    //     Base *ptr  = genrate();
    //     delete ptr;
    // }
}
