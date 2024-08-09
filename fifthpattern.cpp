#include <iostream>

int main() {
    int n = 4;  // Size of the pattern

    // Print the upper part of the pattern (increasing stars)
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Print the lower part of the pattern (decreasing stars)
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
