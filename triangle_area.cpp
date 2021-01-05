// Copyright (c) 2021 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on January 2021
// This program can calculate the area of a triangle

#include <iostream>
#include <string>

void triangleArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = (base * height) /2;

    // output
    std::cout << "The area is " << area << "cm²" << std::endl;
}


main() {
    // this function gets base(cm) and height(cm)

    std::string baseString;
    std::string heightString;
    int baseInteger;
    int heightInteger;

    // input
    std::cout << "Enter the base of a triangle (cm): ";
    std::cin >> baseString;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> heightString;
    std::cout << std::endl;

    try {
        baseInteger = std::stoi(baseString.c_str());
        heightInteger = std::stoi(heightString.c_str());

        if (baseInteger > 0 && heightInteger > 0) {
            // call functions
            triangleArea(baseInteger, heightInteger);
        } else {
            std::cout << "The values should be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This is not an integer" << std::endl;
    }
}
