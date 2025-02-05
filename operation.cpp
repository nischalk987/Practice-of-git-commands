#include <iostream>

int main() {
    // Arithmetic operations
    int a = 10;
    int b = 5;
    std::cout << "Arithmetic Operations:" << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;

    // Logical operations
    bool x = true;
    bool y = false;
    std::cout << "\nLogical Operations:" << std::endl;
    std::cout << "x && y = " << (x && y) << std::endl;
    std::cout << "x || y = " << (x || y) << std::endl;
    std::cout << "!x = " << (!x) << std::endl;

    // Bitwise operations
    unsigned int m = 60; // 60 = 0011 1100  
    unsigned int n = 13; // 13 = 0000 1101
    std::cout << "\nBitwise Operations:" << std::endl;
    std::cout << "m & n = " << (m & n) << std::endl; // AND
    std::cout << "m | n = " << (m | n) << std::endl; // OR
    std::cout << "m ^ n = " << (m ^ n) << std::endl; // XOR
    std::cout << "~m = " << (~m) << std::endl; // NOT
    std::cout << "m << 2 = " << (m << 2) << std::endl; // Left shift
    std::cout << "m >> 2 = " << (m >> 2) << std::endl; // Right shift

    return 0;
}
