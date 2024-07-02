#include <iostream>
#include <vector>
#include <list>
#include <numeric>


template <typename T>
int total (T first, T last)
{
    int sum = 0;
    for (T p = first; p != last; ++p)
    {
        sum += *p;
    }
    return sum;
}

int main ()
{
    std::vector<int> v{ 1, 2, 3, 4, 5 };
    std::cout << total(v.begin(), v.end()) << std::endl;
    std::cout << std::accumulate(v.begin(), v.end(), 0) << std::endl;

    int a[] = { 1, 2, 3, 4, 5 };
    std::cout << total(a, std::end(a)) << std::endl;
    std::cout << std::accumulate(a, std::end(a), 0) << std::endl;

    std::list<int> li{ 1, 2, 3, 4, 5 };
    std::cout << total(li.begin(), li.end()) << std::endl;
    std::cout << std::accumulate(li.begin(), li.end(), 0) << std::endl;
}