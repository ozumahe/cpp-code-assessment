// QUESTION
/*
     Write a program that displays the square root of two numbers provided as input data 
     (first and second) and the square root of their sum.

*/

#include <iostream>
#include <cmath>

int main() {
    double firstNumber, secondNumber;
    
    // Input First Number
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    
    // Input First Number
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;
    
    double sqrtFirst = sqrt(firstNumber);
    double sqrtSecond = sqrt(secondNumber);
    double sqrtSum = sqrt(firstNumber + secondNumber);
    
    std::cout << "Square root of the first number: " << sqrtFirst << std::endl;
    std::cout << "Square root of the second number: " << sqrtSecond << std::endl;
    std::cout << "Square root of the sum of the numbers: " << sqrtSum << std::endl;
    
    return 0;
}
