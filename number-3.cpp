//QUESTION
/*
    A cyclist coasting on a level road slows from 10 miles per hour to 2.5 miles per hour in a minute.
    Write a program that calculates the cyclist’s constant rate of deceleration and determine how long it will take the cyclist to come to rest,
    given an initial speed of 10 miles per hour. 
*/

#include <iostream>
#include <cmath>

int main() {
    double initialSpeed = 10.0; // initial speed in miles per hour
    double finalSpeed = 0.0;    // final speed when coming to rest
    double timeInMinutes = 1.0; // time in minutes
    
    // Convert time to hours
    double timeInHours = timeInMinutes / 60.0;
    
    // Calculate the deceleration rate using the formula: a = (v_f - v_i) / t
    double decelerationRate = (finalSpeed - initialSpeed) / timeInHours;
    
    // Calculate the time it takes to come to rest using the formula: t = (v_f - v_i) / a
    double timeToRest = finalSpeed / std::abs(decelerationRate);
    
    std::cout << "Cyclist's constant rate of deceleration: " << decelerationRate << " miles per hour squared" << std::endl;
    std::cout << "Time it takes to come to rest: " << timeToRest << " hours" << std::endl;
    
    return 0;
}
