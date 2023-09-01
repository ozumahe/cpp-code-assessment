// QUESTION
/*
    Write a program that reads in a real number, its capacity and size of the class and roll so far and print out an output line showing the class roll’s  number, capacity, number of seats filled, number of seat available and a person indicating whether a class is filled
*/

#include <iostream>

int main() {
    int classRollNumber, capacity, seatsFilled;

    std::cout << "Enter the class roll number: ";
    std::cin >> classRollNumber;

    std::cout << "Enter the class capacity: ";
    std::cin >> capacity;

    std::cout << "Enter the number of seats filled: ";
    std::cin >> seatsFilled;

    int seatsAvailable = capacity - seatsFilled;

    bool isClassFilled = (seatsFilled >= capacity);

    std::cout << "Class Roll Number: " << classRollNumber << std::endl;
    std::cout << "Capacity: " << capacity << " seats" << std::endl;
    std::cout << "Seats Filled: " << seatsFilled << " seats" << std::endl;
    std::cout << "Seats Available: " << seatsAvailable << " seats" << std::endl;

    if (isClassFilled) {
        std::cout << "The class is filled." << std::endl;
    } else {
        std::cout << "The class is not filled." << std::endl;
    }

    return 0;
}
