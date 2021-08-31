#pragma once
#include <iostream>

struct Point {
    double x = 0.0;
    double y = 0.0;
};

Point input_coord () {
    Point point;
    std::cout << "Input coord of point X Y:";
    std::cin >> point.x >> point.y;

    return point;
}

bool coincidence_of_points (Point &point_1, Point &point_2) {
    return (point_1.x == point_2.x && point_1.y == point_2.y);
}