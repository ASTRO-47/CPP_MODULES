#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal{
private:
    //
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
    ~WrongCat();

    void makeSound(void) const;
};

#endif
