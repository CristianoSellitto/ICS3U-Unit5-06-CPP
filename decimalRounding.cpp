// Copyright Cristiano 2023
//
// Created by Cristiano Sellitto
// Created in January 2023
// A program that rounds off decimals depending on input

#include <iostream>
#include <cmath>

void roundADecimal(float &decimal, int &numberOfRounds) {
    // Rounds off a decimal by reference

    decimal = decimal * pow(10, numberOfRounds);
    decimal += 0.5;
    decimal = static_cast<int>(decimal);
    decimal = decimal / pow(10, numberOfRounds);
}

int main() {
    // Gets the number of decimals and prints the new number

    std::string decimalsToRoundText;
    std::string numberChosenText;
    int decimalsToRoundInteger;
    float numberChosen;

    try {
        std::cout << "Enter a decimal number: ";
        std::cin >> numberChosenText;
        numberChosen = stof(numberChosenText);
        std::cout << "Enter the number of decimals to round off to: ";
        std::cin >> decimalsToRoundText;
        std::cout << std::endl;
        decimalsToRoundInteger = stoi(decimalsToRoundText);
        roundADecimal(numberChosen, decimalsToRoundInteger);
        std::cout << "The rounded decimal is " << numberChosen;
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "This is not valid input.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
