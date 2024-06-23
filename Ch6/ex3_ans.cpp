#include <iostream>


template<typename T>
void myReverse(T first, T last)
{
    while (first < last)
    {
        --last;
        auto tmp = *last;
        *last = *first;
        *first = tmp;
        ++first;
    }
}

int main()
{
    int a[] = { 2, 9, 4, 1, 5, 3 };
    myReverse(a, std::end(a));
    for (auto i : a)
    {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    int b[] = { 3 };
    myReverse(b, std::end(b));
    for (auto i : b)
    {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}