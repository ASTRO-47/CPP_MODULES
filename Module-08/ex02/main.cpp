#include "MutantStack.tpp"

#include <stack>
#include <deque>

int main()
{

    std::stack<int, std::deque<int> > imad;

    imad.push(1);
    
    // MutantStack<int> imad;

    // std::cout << imad.size() << std::endl;
}
