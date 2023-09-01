// QUESTION 1
/*
    There are 9,879 people in a town whose population increases by 10% each year.
    Write a program using the while loop to determine how many years it will take for the population to exceed 10,000. 
*/

// CODE SOLUTION

#include <iostream>

int main() {
    int currentPopulation = 9879;
    int populationTarget = 10000;
    double growthRate = 0.10;  // 10% growth rate

    int years = 0;
    int population = currentPopulation;

    while (population <= populationTarget) {
        population += population * growthRate;
        years++;
    }

    std::cout << "" << std::endl;
    std::cout << "Current Population " << currentPopulation << "\n" << std::endl;
    std::cout << "Population Target " << populationTarget << "\n" << std::endl;
    std::cout << "It will take " << years << " years for the population to exceed 10,000." << std::endl;

    return 0;
}
