#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>
#include <chrono>
#include "number.h"


const int N = 100;
int total = 0;
std::mutex m1, m2;

void threadFuncA()
{
    for (int n = 4; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            std::unique_lock<std::mutex> lock1(m1);
            std::cout << n << ", ";
            std::unique_lock<std::mutex> lock2(m2);
            ++total;
        }
    }
}

void threadFuncB()
{
    for (int n = 5; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            std::unique_lock<std::mutex> lock1(m2);
            std::cout << n << ", ";
            std::unique_lock<std::mutex> lock2(m1);
            ++total;
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