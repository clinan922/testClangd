#include <iostream>
#include <vector>
#include "MulFile.h"

int main(int, char**){
    std::cout << "Hello, from main!\n";
    tc::testClangd test;
    test.print(5);
    std::vector<std::string> msg{"hello","c++","clang","vs code"};

    for (auto& word : msg) {
        std::cout<<word<<std::endl;
        std::cout<<word<<std::endl;
        std::cout<<word<<std::endl;
    }
}
