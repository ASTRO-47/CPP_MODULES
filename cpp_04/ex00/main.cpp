#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>
int main()
{

    void *ne = new Animal();//need  to know the diff between the () and nothing
    // Animal *h = new Dog;
    // h->makeSound();
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog;
    // const Animal* i = new Cat();


    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // return 0;
}
