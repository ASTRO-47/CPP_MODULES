
#include <iostream>

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
it does not check the if the pointer type and data pionted by the pointer are same or not
it is used to convert a pointer of some data type into a pointer of another data type, even


----------------reinterpret_cast-------------------


*/
 
using namespace std;

class base
{
    public:
        base(){ puts("hello");}
} ;


class derived : public base
{
    public:
        derived(){puts("from hello");}
} ;


class test2
{
    public:
        test2(){ puts("hello");}
} ; 

int main ()
{
    const int *ptr = new int (8);

    int * ptr_ = const_cast <int*> (ptr);
}


// compile time polymorphism ---> function overloading and operator overloading
// run time polymorphism : virutal methods (overiding)
