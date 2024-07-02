#include <iostream>
#include <vector>


int main ()
{
    std::vector<int> v{ 1, 2, 3, 4, 5 };

    for (auto i = v.cbegin(); i != v.end(); ++i)
    {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;

    for (auto i = v.begin(); i != v.end(); ++i)
    {
        *i *= 10;
        std::cout << *i << std::endl;
    }
    std::cout << std::endl;

    for (auto i = v.crbegin(); i != v.crend(); ++i)
    {
        std::cout << *i << std::endl;
    }
    std::cout << std::endl;

    for (auto i = v.rbegin(); i != v.rend(); ++i)
    {
        *i *= 10;
        std::cout << *i << ", ";
    }
    std::cout << std::endl;
}