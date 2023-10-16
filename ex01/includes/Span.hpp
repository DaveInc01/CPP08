#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <cmath>
#include <ctime>
// #include <bits/stdc++.h> 

class Span{
public:
    Span();
    Span( unsigned int n );
    Span( const Span &copy );
    Span& operator=( const Span &copy );
    ~Span(){};
    class myException : public std::exception{
    public:
        myException(const char *t) : text(t){}
		const char* what() const throw();
    private:
        const char *text;
	};
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
    std::vector<int> vect;
};

template<typename I>
void fillVect(I i, I end, Span &s)
{
	for ( ; i != end; i++)
	{
		s.addNumber(*i);
	}
}
#endif