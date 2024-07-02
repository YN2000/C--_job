#include <iostream>
#include <algorithm>
#include <vector>


bool less1(int , int );

int main ()
{
    std::cout << std::min(3, 2) << std::endl;
    std::cout << std::max(3, 2) << std::endl;

    std::cout << std::min({ 3, 2, 1, 4 }) << std::endl;
    std::cout << std::max({ 3, 2, 1, 4 }) << std::endl;

    auto result1 = std::minmax({ 3, 2, 1, 4 });
    std::cout << result1.first << std::endl;
    std::cout << result1.second << std::endl;

    // std::cout << less1(2, 12) << std::endl;
    auto result2 = std::minmax({ 10, 11, 9, 12 }, less1);
    std::cout << result2.first << std::endl;
    std::cout << result2.second << std::endl;

    std::vector<int> v{ 10, 11, 9, 12 };
    auto minIter = std::min_element(v.cbegin(), v.cend());
    std::cout << *minIter << std::endl;

    auto maxIter = std::max_element(v.cbegin(), v.cend());
    std::cout << *maxIter << std::endl;

    auto minmaxIter1 = minmax_element(v.cbegin(), v.cend());
    std::cout << *minmaxIter1.first << std::endl;
    std::cout << *minmaxIter1.second << std::endl;

    auto minmaxIter2 = std::minmax_element(v.cbegin(), v.cend(), less1);
    std::cout << *minmaxIter2.first << std::endl;
    std::cout << *minmaxIter2.second << std::endl;
}