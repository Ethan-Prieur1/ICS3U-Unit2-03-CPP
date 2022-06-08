// Copyright (c) 2022 Ethan Prieur All rights reserved
//
// Created by: Ethan Prieur
// Created on: May 2022
// This program finds the circumference of a Circle

#include <iostream>

int main() {
    // this function calculates circumference of a circle

    const double TAU = 6.28;
    int radius;
    double circumference;

    // Input

    std::cout << "Enter The Radius of The Circle (mm): ";
    std::cin >> radius;

    // Process

    circumference = TAU*radius;

    // Output

    std::cout << "" << std::endl;
    std::cout << "The Circumference is " << circumference << " mm" << std::endl;
}
