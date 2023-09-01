// QUESTION
/*
    Write a program to find the length of the third side of a triangle,
    if you know the length of the other sides (B and C) of the triangle and angle between them in degrees (alpha).
*/

#include <iostream>
#include <cmath>

int main() {
    double sideB, sideC, angleAlpha;
    
    // Input the values
    std::cout << "Enter the length of side B: ";
    std::cin >> sideB;
    
    std::cout << "Enter the length of side C: ";
    std::cin >> sideC;
    
    std::cout << "Enter the angle alpha in degrees: ";
    std::cin >> angleAlpha;
    
    // Convert angle from degrees to radians
    double angleRadians = angleAlpha * M_PI / 180.0;
    
    /*
     I will be Calculating the length of the third side using the law of cosines:
     A^2 = B^2 + C^2 - 2 * B * C * cos(alpha)
    */
    double sideA = sqrt(sideB * sideB + sideC * sideC - 2 * sideB * sideC * cos(angleRadians));
    
    std::cout << "The length of the third side (A) is: " << sideA << std::endl;
    
    return 0;
}
