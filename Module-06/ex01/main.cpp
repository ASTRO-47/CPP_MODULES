#include "Serializer.hpp"

/* uintptr_t is a powerful and portable tool for low-level 
pointer manipulation in C++, but it should be used carefully and only 
when absolutely necessary to avoid losing the benefits of type safety 
and abstraction provided by higher-level pointer operations. */



int main() 
{
   Data *my_data = new Data;
   my_data->name = "imad";
   std::cout << "the pointer in that holds \"my_data\" var in first time: " << my_data << std::endl;
   uintptr_t my_ptr = Serializer::serialize(my_data);
   std::cout << "the pointer of my_data as unsigned integer: " << my_ptr << std::endl;
   Data *my_data_2 = Serializer::deserialize(my_ptr);
   std::cout << "the pointer returned by the deserialize function: " << my_data_2 << std::endl;
}

