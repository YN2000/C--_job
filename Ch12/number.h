#pragma once

#include <iostream>
#include <cmath>


template<typename T>
void report (T first, T last)
{
    const int num = 5;

    if (last - first < num)
    {
        for (T i = first; i != last; ++i)
        {
            std::cout << *i << ", ";
        }
    }
    else
    {
        for (T i = first; i != first + num; ++i)
        {
            std::cout << *i << ", ";
        }
        std::cout << std::endl;
        for (T i = last - num; i != last; ++i)
        {
            std::cout << *i << ", ";
        }
    }
    std::cout << std::endl;
}

bool isPrime (int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }

    for (int j = 2; j <= std::sqrt(n); ++j)
    {
    if (n % j == 0)
    {
        return false;
    }
    }

    return true;
}