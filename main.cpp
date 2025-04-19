#include "MulFile.h"
#include <iostream>
#include <vector>
#include "TestClangFormat.h"
int main(int, char **)
{
    std::cout << "Hello, from main!\n";
    tc::testClangd test;
    test.print(5);
    std::vector<std::string> msg{"hello", "c++", "clang", "vs code"};

    for (auto &word: msg)
    {
        std::cout << word << std::endl;
        std::cout << word << std::endl;
        std::cout << word << std::endl;
        std::cout << word << std::endl;
    }

    std::vector<int> nums = {1, 2, 3, 4, 5};
    Example ex(10);
    ex.process(nums);
}
