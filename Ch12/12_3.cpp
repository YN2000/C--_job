#include <thread>
#include "number.h"
#include <iostream>
#include <iomanip>
#include <sstream>


const int N = 100;
std::stringstream ss;

void threadFuncA()
{
    for (int n = 4;  n <= N; n += 3)
    {
        if (isPrime(n))
        {
            ss << n << ", ";
            std::cout << ss.str() << std::endl;
        }
    }
}

void threadFuncB()
{
    for (int n = 5; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            ss << n << ", ";
            std::cout << ss.str() << std::endl;
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