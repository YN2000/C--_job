#include <iostream>
#include <unordered_map>
#include <string>


namespace std
{
    template<>
    struct hash<std::pair<std::string, int>>
    {
        std::size_t operator() (const std::pair<std::string, int>& person) const 
        {
            std::size_t h1 = hash<std::string>()(person.first);
            std::size_t h2 = hash<int>()(person.second);
            return h1 ^ h2;
        }
    };
}


int main ()
{
    std::unordered_map<std::pair<std::string, int>, int> people;
    auto taro = std::make_pair("Taro", 32);
    people[taro] = 32;

    std::cout << people[taro] << std::endl;
}