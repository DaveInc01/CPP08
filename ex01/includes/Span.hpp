#ifndef SPAN_HPP
# define SPAN_HPP

#include "iostream"
#include<iterator>
#include <vector>
#include <bits/stdc++.h> 


class Span{
public:
    Span();
    Span( unsigned int n );
    Span( const Span &copy );
    Span& operator=( const Span &copy );
    ~Span(){};
    struct myException : public std::exception{
		const char* what() const throw();
	};
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
private:
    std::vector<int> vect;
};

#endif