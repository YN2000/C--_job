#include <iostream>
#include <random>
#include <map>


int main ()
{
    std::random_device engine;
    std::uniform_int_distribution<unsigned> dist1(1, 6);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << dist1(engine) << ", ";
    }
    std::cout << std::endl;

    std::uniform_real_distribution<double> dist2(0.0, 1.0);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << dist2(engine) << ", ";
    }
    std::cout << std::endl;

    std::map<int, int> frequency;
    std::normal_distribution<double> dist3(50.0, 5.0);
    for (int i = 0; i < 500; ++i)
    {
        double x = dist3(engine);
        ++frequency[static_cast<int>(x)];
    }
    for (auto p : frequency)
    {
        std::cout << p.first << "|";
        for (int i = 0; i < p.second; ++i)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}