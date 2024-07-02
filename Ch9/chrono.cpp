#include <iostream>
#include <chrono>


int main ()
{
    auto t0 = std::chrono::high_resolution_clock::now();

    int s = 0;
    for (int i = 0; i < 10000; ++i)
    {
        for (int j = 0; j < 100000; ++j)
        {
            ++s;
        }
    }
    std::cout << s << std::endl;

    auto t1 = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count() / 1000. << " s.\n";
}