#include <iostream>
#include <vector>
#include <algorithm>


int main ()
{
    std::vector<int> v{ 1, 2, 3, 4, 5 };
    auto begin = v.cbegin();
    auto end = v.cend();

    int target = 3;
    auto pos = std::find(begin, end, target);
    if (pos == end)
    {
        std::cout << "Not found";
    }
    else
    {
        std::cout << "found" << *pos << std::endl;
    }

    target = 6;
    pos = std::find(begin, end, target);
    if (pos == end)
    {
        std::cout << "Not found\n";
    }
    else
    {
        std::cout << "Found" << *pos << std::endl;
    }
}