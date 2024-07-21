#include <thread>
#include <mutex>
#include "number.h"


std::mutex m;

void threadFunc(int N, int start)
{
    for (int n = start; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            std::unique_lock<std::mutex> lock(m);
            std::cout << n << ", ";
        }
    }
}

int main()
{
    const int N = 100;

    std::cout << "2, 3, ";

    std::thread threadA(threadFunc, N, 4);
    std::thread threadB(threadFunc, N, 5);

    threadA.join();
    threadB.join();

    std::cout << std::endl;
}