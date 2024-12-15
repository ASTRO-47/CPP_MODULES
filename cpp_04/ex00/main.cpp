#include "Cat.hpp"
#include "Dog.hpp"

/*"is-a" relationship between the base and the derived class that's why 
a base class pointer can hold a derived class object

we can not do the reverse way because of the type safety and logical 
constraints in object-oriented programming*/

/*ref about polymorphisme:
https://youtu.be/4NPOIaUxnnk 

virtual = dynamic binding  = overriding
static binding = redefining
*/
learn about the binding on general

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    return 0;
}
