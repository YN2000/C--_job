#include <iostream>
#include <vector>
#include <chrono>
#include <cmath>
#include "number.h"


int main()
{
    auto t0 = std::chrono::high_resolution_clock::now();

    const int N = 400000;

    std::vector<int> primes;

    for (int n = 2; n <= N; ++n)
    {
        if (isPrime(n))
        {
            primes.emplace_back(std::move(n));
        }
    }

    std::cout << "The number of primes: " << primes.size() << std::endl;

    report(primes.cbegin(), primes.cend());

    auto t1 = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds> (t1 - t0).count() / 1000. << "seconds\n"; 
}