// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program add positive numbers only

#include <iostream>
#include <string>

int main() {
    // This program add positive numbers only
    int userNumber;
    int numberAdd;
    int numberTime;
    int total = 0;
    std::string userNumberString;
    std::string numberAddString;

    std::cout << "How many numbers are you going to add : ";
    std::cin >> userNumberString;

    try {
        userNumber = std::stoi(userNumberString);
        for (int numberTime = 0; numberTime < userNumber; numberTime++) {
            std::cout << "Enter a number to add : ";
            std::cin >> numberAddString;
            numberAdd = std::stoi(numberAddString);
            if (numberAdd < 0) {
                continue;
            }
            total = total + numberAdd;
        }
            std::cout << "Sum of just the positive numbers is = "
            << total <<std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" <<std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
