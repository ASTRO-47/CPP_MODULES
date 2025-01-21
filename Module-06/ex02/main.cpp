#include "classes.hpp"

Base::~Base(){};

Base *genrate()
{
    // std::srand(rand)
    // std::srand(std::time(0));
    int ran = rand() % 3;
    std::cout << ran << std::endl;
    // return N;
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
        (void) a;
        std::cout << "The reference passed is for an object of type A\n";
        return;
    }
    catch (const std::bad_cast&) {}

    try 
    {
        B& b = dynamic_cast<B&>(p);
        (void) b;
        std::cout << "The reference passed is for an object of type B\n";
        return;
    }
    catch (const std::bad_cast&) {}

    try 
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "The reference passed is for an object of type C\n";
        (void) c;
        return;
    } catch (const std::bad_cast&) {}

}


void identify(Base *p)
{

    // NULL protection
    if (!p)
        return ;
    if (dynamic_cast<A*>(p))
        std::cout << "the pointer holding a A object\n";
    if (dynamic_cast<B*>(p))
        std::cout << "the pointer holding B object\n";
    if (dynamic_cast<C*>(p))
        std::cout << "the pointer holding C object\n";
}

int main ()
{
    srand(time(0));

    for (int i = 0;i < 10;i++) 
    {
        genrate();
    }
    // A a;
    // Base *ptr = &a;
    // identify(ptr);
}
