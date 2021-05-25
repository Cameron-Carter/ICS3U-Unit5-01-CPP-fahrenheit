// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program converts temperature in degrees Celsius to Fahrenheit

#include <iostream>
#include <random>
#include <string>

void convertToFahrenheit() {
    // Converts to fahrenheit

    // Define variables
    std::string celsiusAsString;
    int celsiusAsFloat;
    float fahrenheit;

    // Input
    std::cout << "Enter a temperature in degrees Celsius: ";
    std:: cin >> celsiusAsString;

    // Process and output
    try {
        celsiusAsFloat = std::stof(celsiusAsString);
        fahrenheit = 1.8 * celsiusAsFloat + 32;
        std::cout << "The temperature in degrees Fahrenheit is "
        << fahrenheit << "°." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid temperature!" << std::endl;
    }
    std::cout << "\nDone.";
}

main() {
    // This function calls on convertToFahrenheit

    // Call function
    convertToFahrenheit();
}
