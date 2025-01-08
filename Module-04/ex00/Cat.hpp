#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat: public Animal{
private:
    //
public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(const Cat &other);
    ~Cat();

    void makeSound(void) const;
};

#endif