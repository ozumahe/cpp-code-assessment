// QUESTION 
/*     
    Write a simple program that uses a block of codes to prevent a division by zero
*/

#include <iostream>

int main() {
    int numerator, denominator;
    
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;
    
    // THIS IF STATEMENT CHECKS IS THE DIVISOR IS (0)
    if (denominator != 0) {
        // Perform division only if the denominator is not zero
        double result = static_cast<double>(numerator) / denominator;
        std::cout << "Result of division: " << result << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }
    
    return 0;
}
