// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program checks if the user's guess is a
// positive, negative or zero number
#include <iostream>

int main() {
    int number;

    // Prompt user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << number << " is a positive number" << std::endl;
    } else if (number < 0) {
        std::cout << number << " is a negative number" << std::endl;
    } else {
        std::cout << number << " is just zero!" << std::endl;
    }

    return 0;
}
