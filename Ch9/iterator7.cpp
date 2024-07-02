#include <iostream>
#include <vector>
#include <algorithm>


int numOfDivisors (int n)
{
    int divisors = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0) ++divisors;
    }
    return divisors;
}

bool less1 (int lhs, int rhs)
{
    return numOfDivisors(lhs) < numOfDivisors(rhs);
}

struct less2 
{
    bool operator()(int lhs, int rhs)
    {
        return numOfDivisors(lhs) < numOfDivisors(rhs);
    }
};

// int main ()
// {
//     const int N = 16;

//     std::vector<int> v;
//     for (int i = 1; i <= N; ++i)
//     {
//         v.push_back(i);
//     }

//     std::vector<int> v1 = v;
//     std::sort(v1.begin(), v1.end(), less1);
//     for (auto i : v1)
//     {
//         std::cout << i << ", ";
//     }
//     std::cout << std::endl;

//     std::vector<int> v2 = v;
//     less2 obj;
//     std::sort(v2.begin(), v2.end(), obj);
//     for (auto i : v2)
//     {
//         std::cout << i << ", ";
//     }
//     std::cout << std::endl;

//     std::vector<int> v3 = v;
//     std::sort(v3.begin(), v3.end(),
//         [](auto lhs, auto rhs) {
//             return numOfDivisors(lhs) < numOfDivisors(rhs);
//         }
//     );
//     for (auto i : v3)
//     {
//         std::cout << i << ", ";
//     }
//     std::cout << std::endl;
// }