#include <iostream>

int main() {
    int age;

    // Input the user's age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Check the age category and print the appropriate message
    if (age < 18) {
        std::cout << "You are a child." << std::endl;
    } else if (age >= 18 && age <= 65) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a senior citizen." << std::endl;
    }

    return 0;
}
