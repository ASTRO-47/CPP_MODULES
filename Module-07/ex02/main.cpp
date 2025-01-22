
#include "Iter.hpp"


int main ()
{ 
    int arr[] = {2,5,2,5,2};
    iter(&arr[0], 5, &print<int>);
}
