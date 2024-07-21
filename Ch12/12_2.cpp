#include <thread>
#include "number.h"
#include <iostream>


const int N = 100;

void threadFuncA()
{
    for (int n = 4;  n <= N; n += 3)
    {
        if (isPrime(n))
        {
            std::cout << n << ", ";
        }
    }
}

void threadFuncB()
{
    for (int n = 5; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            std::cout << n << ", ";
        }
    }
}

int main()
{
    std::cout << "2, 3, ";

    std::thread threadA(threadFuncA);
    std::thread threadB(threadFuncB);

    threadA.join();
    threadB.join();
    std::cout << std::endl;
}