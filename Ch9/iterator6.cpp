#include <iostream>
#include <vector>
#include <algorithm>


int main ()
{
    std::vector<int> v = { 503, 87, 512, 61, 908, 170, 897, 275, 200, 426 };

    std::sort(v.begin(), v.end());

    auto begin = v.cbegin();
    auto end = v.cend();

    int target = 200;
    auto pos = std::lower_bound(begin, end, target);

    if (pos == end || *pos != target)
    {
        std::cout << "Not found\n";
    }
    else
    {
        std::cout << "Found " << *pos << std::endl;
    }

    target = 404;
    pos = std::lower_bound(begin, end, target);

    if (pos == end || *pos != target)
    {
        std::cout << "Not found\n";
    }
    else
    {
        std::cout << "Found " << *pos << std::endl;
    }
}