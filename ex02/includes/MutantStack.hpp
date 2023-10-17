#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T>
class MutantStack{
public:
    MutantStack ();
    MutantStack (MutantStack &copy);
    MutantStack& opertaot=(MutantStack &other);
    ~MutantStack();
public:
    void push();
    std::vector<T>  s;
    unsigned int len;
};

#endif