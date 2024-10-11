#include <iostream>

int main(int, char**){
    std::cout << "love";
}

// 查看汇编文件
// clang++ -S example.cpp -o example.s
// g++ -S -O2 example.cpp -o example_optimized_o2.s