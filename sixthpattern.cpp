#include <iostream>

int main() {
    int m = 4;  // Number of rows
    int n = 6;  // Number of columns

    // Print the top border
    for (int j = 0; j < n; ++j) {
        std::cout << "*";
    }
    std::cout << std::endl;

    // Print the middle part with spaces
    for (int i = 1; i < m - 1; ++i) {
        std::cout << "*";  // Start of the row
        for (int j = 1; j < n - 1; ++j) {
            std::cout << " ";  // Space in the middle
        }
        std::cout << "*";  // End of the row
        std::cout << std::endl;
    }

    // Print the bottom border
    if (m > 1) {  // Only print the bottom border if there is more than one row
        for (int j = 0; j < n; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
