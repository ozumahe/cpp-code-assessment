// QUESTION
/*
Your company pays its hourly workers once a week and employees pay based upon the number of hours worked and the employees pay weekly/hour exceeding 40 are paid a rate of time and a half. Employees who does of 100 Naira a week. Write a pay roll program that will determine the gross pay and net pay for an employee
*/


#include <iostream>

int main() {
    double hourlyRate, hoursWorked;
    const double overtimeRate = 1.5; // Time-and-a-half for overtime
    const double fixedDeduction = 100.0; // Fixed deduction

    // Input hourly rate and hours worked
    std::cout << "Enter hourly rate: ";
    std::cin >> hourlyRate;

    std::cout << "Enter hours worked: ";
    std::cin >> hoursWorked;

    // Calculating gross pay, including overtime if applicable
    double grossPay;
    if (hoursWorked <= 40) {
        grossPay = hourlyRate * hoursWorked;
    } else {
        double regularPay = hourlyRate * 40; // Pay for first 40 hours
        double overtimeHours = hoursWorked - 40; // Overtime hours
        double overtimePay = overtimeRate * hourlyRate * overtimeHours; // Overtime pay
        grossPay = regularPay + overtimePay;
    }

    // Calculating net pay after deducting the fixed amount
    double netPay = grossPay - fixedDeduction;

    // Display the gross pay and net pay
    std::cout << "Gross Pay: " << grossPay << " Naira" << std::endl;
    std::cout << "Net Pay: " << netPay << " Naira" << std::endl;

    return 0;
}
