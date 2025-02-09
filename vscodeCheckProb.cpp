#include <iostream>

int main() {
    // Check the C++ standard version
    if (__cplusplus == 202002L) {
        std::cout << "C++ Standard: C++20\n";
    } else if (__cplusplus == 201703L) {
        std::cout << "C++ Standard: C++17\n";
    } else if (__cplusplus == 201402L) {
        std::cout << "C++ Standard: C++14\n";
    } else if (__cplusplus == 201103L) {
        std::cout << "C++ Standard: C++11\n";
    } else {
        std::cout << "C++ Standard: pre-C++11\n";
    }

    return 0;
}
