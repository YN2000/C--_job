#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>
#include <chrono>
#include "number.h"

std::mutex m;


void threadFunc(int N, int start, std::vector<int>& primes)
{
    for (int n = start; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            std::unique_lock<std::mutex> lock(m);
            primes.push_back(n);
        }
    }
}

int main()
{
    auto t0 = std::chrono::high_resolution_clock::now();

    const int N = 400000;
    std::vector<int> primes{ 2, 3 };
    
    std::thread threadA(threadFunc, N, 4, ref(primes));
    std::thread threadB(threadFunc, N, 5, ref(primes));

    threadA.join();
    threadB.join();

    std::cout << "The number of primes: " << primes.size() << std::endl;
    std::sort(primes.begin(), primes.end());
    report(primes.cbegin(), primes.cend());

    auto t1 = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds> (t1-t0).count() / 1000. << "seconds\n";
}