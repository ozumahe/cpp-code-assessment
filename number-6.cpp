// QUESTION
/*
    Write a program using a for loop to find and print the sum of an integer from 1 to 9.
*/

#include <iostream>

int main() {
    int sum = 0; // Initialize the sum to 0

    for (int i = 1; i <= 9; ++i) {
        sum += i; // Add the current value of 'i' to the sum
    }

    std::cout << "The sum of integers from 1 to 9 is: " << sum << std::endl;

    return 0;
}
