#include <iostream>
#include <unordered_map>
#include <string>
#include <complex>
#include <utility>

int main() 
{
    std::unordered_map<std::string, int> dictionary{ { "one", 0  }, { "two", 2 }, { "three", 3 } };
    
    std::cout << dictionary["two"] << std::endl;
    dictionary["one"] = 1;
    std::cout << dictionary["one"] << std::endl;
    std::cout << dictionary["four"] << std::endl;
    if (dictionary.find("five") == dictionary.end()) 
    {
        std::cout << "not found\n";
    }
    // std::cout << dictionary.end() << std::endl;
    dictionary["six"] = 6;
    for (const auto& p : dictionary)
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    std::unordered_map<std::string, std::complex<double>> dic;
    std::complex<double> z(3., 4.);
    dic["A"] = z;
    dic["B"] = std::complex<double> (5., 12.);
    dic.emplace("C", 10);
    
    auto taro = std::make_pair("Taro", 32);
    std::cout << taro.first << std::endl;
    std::cout << taro.second << std::endl;

    auto hanako = std::make_tuple("Hanako", 1980, 1, 28);
    std::cout << std::get<0>(hanako) << std::endl;
    std::cout << std::get<1>(hanako) << std::endl;
    std::cout << std::get<2>(hanako) << std::endl;
    std::cout << std::get<3>(hanako) << std::endl;
}