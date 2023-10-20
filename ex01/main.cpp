#include "includes/Span.hpp"

int main (){
    Span *s1 = new Span (10000);
    srand (time(NULL));

    std::vector<int> arr(9999);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = rand();
    // std::generate(arr.begin(),arr.end(), rand);
    try {
        fillVect(arr.begin(), arr.end(), *s1);
        s1->addNumber(23);
        for (unsigned long int i = 0; i < s1->vect.size(); i++)
        {
            std::cout << arr[i] << std::endl; 
        }
        // s1->addNumber(24);
        std::cout << "shortest span - " << s1->shortestSpan() << std::endl;
        std::cout << "longest span - " << s1->longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    delete s1;
}