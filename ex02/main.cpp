#include "includes/MutantStack.hpp"

int main(){
    MutantStack<int> muStack;
    muStack.push(10);
    muStack.push(20);
    muStack.push(30);
    std::cout << muStack.top() << std::endl;
    muStack.pop();
    std::cout << muStack.top() << std::endl;
    std::cout << muStack.size() << std::endl;
    muStack.push(30);
    muStack.push(40);
    muStack.push(50);
    MutantStack<int>::iterator it = muStack.begin();
    MutantStack<int>::iterator ite = muStack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }   
    std::stack<int> s(muStack);
}