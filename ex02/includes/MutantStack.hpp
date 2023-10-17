#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack :public std::stack<T>{
public:
    MutantStack (){};
    // MutantStack (MutantStack &copy);
    // MutantStack& operator=(MutantStack &other);
    ~MutantStack(){};
public:
    void push(T);
    void pop();
    std::vector<T>::iterator top() const;
    std::vector<T>   s;
    unsigned int stack_size;
};

#endif