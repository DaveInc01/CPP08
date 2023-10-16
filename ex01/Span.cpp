#include "includes/Span.hpp"

Span::Span(unsigned int N)
{
    vect.reserve(N);
}

const char* Span::myException::what() const throw(){
    return ("invalid vector exception\n");
}

void Span::addNumber(int num)
{
    if (vect.size() >= vect.capacity()){
        throw(Span::myException());
    }
    else{
        vect.push_back(num);
    }
}

int get_min_span(std::vector<int> v_sorted){
    std::vector<int>::iterator i = v_sorted.begin();
    std::vector<int> span_sizes_v; 
    while (i + 1 < v_sorted.end())
    {
        span_sizes_v.push_back(*(i + 1) - *i);
        i++;
    }
    return *min_element(span_sizes_v.begin(), span_sizes_v.end());
}

int Span::shortestSpan()
{
    if (vect.size() < 2)
        throw(Span::myException());
    std::vector<int> v_sorted(vect.size());
    partial_sort_copy(vect.begin(),vect.end(), v_sorted.begin(), v_sorted.end());
    return (get_min_span(v_sorted));
}

int Span::longestSpan()
{
    if (vect.size() < 2)
        throw(Span::myException());
    std::vector<int> v_sorted(vect.size());
    partial_sort_copy(vect.begin(),vect.end(), v_sorted.begin(), v_sorted.end());
    return (*(v_sorted.end() - 1) - *(v_sorted.begin()));
}