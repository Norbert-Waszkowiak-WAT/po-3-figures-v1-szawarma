#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "point.h"
#include <string>

class Quadrilateral {
private:
    Point a, b, c, d;

public:
    Quadrilateral(Point a, Point b, Point c, Point d);
    Quadrilateral(const Quadrilateral &other);
    bool equals(const Quadrilateral &other);
    void flip();
    void move(double dx, double dy);
    double getSurface();
    std::string toString();
};
#endif