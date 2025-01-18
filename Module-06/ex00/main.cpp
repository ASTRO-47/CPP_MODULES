
#include "ScalarConverter.hpp"

/* operator overloading and function overloading are a compile time polymorphism

the virtual methods and function overiding are the compile time polymorphism
there are 4 types of casting in c++: static_cast dynamic_cast reinterpret_cast  const_cast
const_cast used for refs , pointers or data-members
those are operators in c++
auto promotion (implicit casting) 

----------------static_cast-------------------
(compilt time  casting) used by the programmer to check the safe of the casting (instead the implicit casting)
and its catch more potential errors than explicit c-style castin g
casting the classes pointers with no inheritance is not allowed

----------------dynamic_cast-------------------
(run time casting) used to perform conversion of one type variable to another only on classes pointers
and references.(it means it checkes the valid casting of the variable at the run the time, 
and if the casting fails, it return NULL),  ensures type safety by performing a runtime check
to verify the validity of the conversion.

----------------reinterpret_cast-------------------
if the data types before and after conversion are different
it does not check teh if the pointer type and data pointed by the pointer are same or not
it is used to convert a pointer of some data type into a pointer of another data type, even
they are not hold the same dataype. good luck 

----------------const_cast-------------------
it is used to change or manipulate the const behavior of the source pointer it means we can perform the const 
in two ways:
setting a const pointer to a non-const pointer or deleting or removing the const from a cosnt
pointer

*/
#include <stdlib.h>
int main (int ac , char *av[])
{
    // char *p = malloc(10);
    char *p;
    p = strdup("hello");
    printf("%s\n",p);
    unsigned int *p_ = reinterpret_cast<unsigned int*>(p);
    printf("%s",p_);
    // if (ac != 2)
    //     return(std::cerr << "invalid number of arguments\n", 1);
    // checker my_checker = {0,0,0,0};

    // ScalarConverter::convert(av[1]);
}

// compile time polymorphism ---> function overloading and operator overloading
// run time polymorphism : virutal methods (overiding)
