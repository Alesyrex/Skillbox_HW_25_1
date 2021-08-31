#pragma once
#include "coord.h"
#include <iostream>

void scalpel (Point &point_1, Point &point_2) {
    std::cout << "Made a cut between points (" << point_1.x << "," << point_1.y << ")";
    std::cout << " and (" << point_2.x << "," << point_2.y << ")" << std::endl;
}

void hemostat (Point &point) {
    std::cout << "The hemostat is installed at the point (" << point.x << "," << point.y << ")" << std::endl;
}

void tweezers (Point &point) {
    std::cout << "The tweezers is installed at the point (" << point.x << "," << point.y << ")" << std::endl;
}

void suture (Point &point_1, Point &point_2) {
    std::cout << "The suture is placed between the points (" << point_1.x << "," << point_1.y << ")";
    std::cout << " and (" << point_2.x << "," << point_2.y << ")" << std::endl;
}