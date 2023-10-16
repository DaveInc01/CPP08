#include "includes/easyfind.hpp"

int main ()
{
    std::vector<int> vct;
    vct.assign(5, 10);
    vct.push_back(9);
    vct.push_back(8);
    vct.push_back(7);
    vct.push_back(6);
    try
    {
        std::vector<int> newVect = easyfind(vct, 10);
        for (unsigned int i = 0; i < newVect.size(); i++)
            std::cout << newVect[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}