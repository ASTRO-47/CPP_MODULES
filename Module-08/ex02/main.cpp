#include "MutantStack.tpp"
#include <vector>


using namespace std;
int main()
{
    MutantStack<int> imad;

    imad.push(3);
    imad.push(6);
    imad.push(34);
    imad.push(56);


    for (MutantStack<int>::iterator it = imad.begin();it !=imad.end(); it++)
    {
        std::cout << *it  << std::endl;
    }
}
