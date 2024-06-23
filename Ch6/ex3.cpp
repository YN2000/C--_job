#include <iostream>


void myReverse (int* first, int* last)
{
    std::size_t size = last - first;
    int* a = new int[size] {};

    for (size_t i = 0; i < size; ++i)
    {
        a[size - 1 - i] = *(first + i);
    }
    for (size_t i = 0; i < size; ++i)
    {
        *(first + i) = a[i];
    }

    delete[] a;
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