#pragma once

#include <algorithm>
#include <iostream>
#include <iterator> 
#include <vector>
#include <exception>

template <typename T>
typename T::vector easyfind(T &arr, int elem)
{
    typename T::vector v;
    int flag = 0;
    for (long unsigned int i = 0; i < arr.size(); i++)
    {
        if(elem == arr[i] || flag == 1)
        {
            v.push_back(arr[i]);
            flag = 1;
        }
    }
    if (!flag)
        throw std::exception();
    return v;
}