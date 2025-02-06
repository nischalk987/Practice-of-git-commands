#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two integers
double divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero" << std::endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

int main() {
    int x = 10;
    int y = 5;

    std::cout << "Addition of " << x << " and " << y << " is: " << add(x, y) << std::endl;
    std::cout << "Subtraction of " << x << " and " << y << " is: " << subtract(x, y) << std::endl;
    std::cout << "Multiplication of " << x << " and " << y << " is: " << multiply(x, y) << std::endl;
    std::cout << "Division of " << x << " and " << y << " is: " << divide(x, y) << std::endl;

    return 0;
}
