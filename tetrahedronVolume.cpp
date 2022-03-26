// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <cmath>

int main() {
    // I calculate circumference of a circle
    int edge_length;
    float volume;

    // input
    std::cout << "Input edge length of tetrahedron in cm: ";
    std::cin >> edge_length;

    // process
    volume = pow(edge_length, 3) / (6 * sqrt(2));

    // output
    std::cout << "Circumference is " << volume << " mm" << std::endl;
    std::cout << "\nDone." << std::endl;
}
