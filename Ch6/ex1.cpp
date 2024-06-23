#include <iostream>
#include <vector>

int total (const std::vector<std::vector<int>>& c)
{
    int outAns = 0;

    for (const auto& c1 : c)
    {
        for (const auto& c2 : c1)
        {
            outAns += c2;
        }
    }

    return outAns;
}


int main ()
{
    std::vector<std::vector<int>> m{ {1, 2, 3}, {4, 5, 6} };
    std::cout << total(m) << std::endl;    
}