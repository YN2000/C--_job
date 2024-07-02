#include <iostream>
#include <vector>
#include <algorithm>


int main ()
{
    std::vector<int> v{ 2, 3, 5, 1, 4 };
    std::sort(v.begin(), v.end());
    for (auto i : v)
    {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    int a[] = { 2, 3, 5, 1, 4 };
    std::sort(std::begin(a), std::end(a));
    for (auto i : a)
    {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}