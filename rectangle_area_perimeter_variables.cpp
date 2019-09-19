// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:September 2019
// This program calculates the area and the perimeter of the rectangle

#include <iostream>

int main() {
    // these functions calculates the area and perimeter
    int width;
    int length;
    int area;
    int perimeter;

    // input
    std::cout <<"Enter the width of the rectangle"  << std::endl;
    std::cin >> width;
    std::cout <<"Enter the length of the rectangle" << std::endl;
    std::cin >> length;

    // process
    area = length * width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << "mm^2" << std::endl;
    std::cout << "Perimeter is "<< perimeter << " mm " << std::endl;
}

