
// QUESTION
/*
Write a program that will determine state tax owned by an employee if the state charges a 4% tax for net income, by subtracting a 5,000 Naira allowance for each dependent from gross income. 
Your program should read gross income, number of dependence, and tax amount already deducted. It will then compare the actual tax owed, and print the difference between tax owed and tax deducted, 
followed by the message “SEND CHECK” or “REFUND” depending on whether this difference is positive or negative.
*/



#include <iostream>

int main() {
    double grossIncome, taxDeducted;
    int numOfDependents;

    const double stateTaxRate = 0.04;
    const double allowancePerDependent = 5000.0;

    std::cout << "Enter the gross income: ";
    std::cin >> grossIncome;

    std::cout << "Enter the number of dependents: ";
    std::cin >> numOfDependents;

    std::cout << "Enter the tax amount already deducted: ";
    std::cin >> taxDeducted;

    double taxableIncome = grossIncome - (numOfDependents * allowancePerDependent);

    double actualTaxOwed = taxableIncome * stateTaxRate;

    double taxDifference = actualTaxOwed - taxDeducted;

    std::cout << "Actual tax owed: " << actualTaxOwed << " Naira" << std::endl;

    if (taxDifference > 0) {
        std::cout << "Difference: " << taxDifference << " Naira" << std::endl;
        std::cout << "SEND CHECK" << std::endl;
    } else if (taxDifference < 0) {
        std::cout << "Difference: " << -taxDifference << " Naira" << std::endl;
        std::cout << "REFUND" << std::endl;
    } else {
        std::cout << "No difference. No action needed." << std::endl;
    }

    return 0;
}
