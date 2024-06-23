#include <iostream>
#include <memory>


void f (int* x, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << x[i] << ", ";
    }
    std::cout << std::endl;
}

void f2 (int* first, int* last)
{
    for (int* p = first; p != last; ++p)
    {
        std::cout << *p << ", ";
    }
    std::cout << std::endl;
}

auto f3 ()
{
    int* a = new int[4] { 2, 3, 5, 7 };
    return a;
}

auto f4 ()
{
    std::unique_ptr<int[]> a(new int[4]{ 2, 3, 5, 7 });
    return a;
}

int main () 
{
    // int a[5];
    // // std::size_t n = 5;
    // // int b[n];
    
    // a[0] = 2;
    // a[1] = 3;
    // a[2] = 5;
    // a[3] = 7;
    // a[4] = 11;

    // int b[] = { 2, 3, 5, 7, 11 };
    // size_t size = std::end(b) - std::begin(b);
    // size_t size2 = std::end(b) - b;
    // size_t size3 = sizeof(b) / sizeof(int);
    // std::cout << size << std::endl;
    // std::cout << size2 << std::endl;
    // std::cout << size3 << std::endl;

    // for (auto i : a)
    // {
    //     std::cout << i << ", ";
    // }
    // std::cout << std::endl;

    // for (auto& i : a)
    // {
    //     i *= 2;
    // }
    // for (size_t i = 0; i < 5; ++i)
    // {
    //     std::cout << a[i] << ", ";
    // }
    // std::cout << std::endl;

    // size_t n = 5;
    // int* c = new int[n] { 2, 3, 5, 7, 11 };
    // for (size_t i = 0; i < n; ++i)
    // {
    //     std::cout << c[i] << ", ";
    // }
    // std::cout << std::endl;
    // delete[] c;

    // int d[] = { 2, 3, 5, 7, 11 };
    // size_t size = std::end(d) - std::begin(d);
    // f(d, size);

    // f2(std::begin(d), std::end(d));

    // auto e = f3();
    // for (size_t i = 0; i < 4; ++i)
    // {
    //     std::cout << e[i] << ", ";
    // }
    // std::cout << std::endl;
    // delete[] e;

    auto a = f4();
    for (size_t i = 0; i < 4; ++i)
    {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
}