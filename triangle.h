#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"
#include "line.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Triangle
{
    private:
        Point a;
        Point b;
        Point c;
    public:
        Triangle(Point a, Point b, Point c);
        Triangle(const Triangle &other);
        bool equals (const Triangle &other);
        void flip();
        void move(double dx, double dy);
        double getSurface();
        string toString();
};
#endif