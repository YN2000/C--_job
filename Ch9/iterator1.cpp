#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec(5);

    vec[2] = 102;

    vec.at(1) = 101;

    int *p = &vec[0];
    *p = 100;
    *(p+3) = 103;

    auto it = vec.begin();
    *(it + 4) = 104;

    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;
}