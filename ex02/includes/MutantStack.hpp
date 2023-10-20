#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <deque>
#include <list>

template <class T , class Container = std::deque<T> >
class MutantStack :  public std::stack<T>
{
	public:

	typedef typename Container::iterator iterator;


	MutantStack() : MutantStack<T, Container>::stack(){};
	MutantStack(std::stack<T> &obj)
	{
		this->c = obj.getC();
	};
	MutantStack(std::list<T> &obj) : std::stack<T, Container>( obj )
	{
		this->c = obj.getC();
	};
	MutantStack<T, Container> & operator=(const MutantStack<T, Container> &obj)
    {
		if (this != &obj)
			std::stack<T>::operator=(obj);

		return *this;
	};
	Container getC(){
        return (this->c);
    };
	iterator begin(){
        return this->c.begin();
    };
	iterator end(){
        return this->c.end();
    };
	~MutantStack(){};
};

#endif