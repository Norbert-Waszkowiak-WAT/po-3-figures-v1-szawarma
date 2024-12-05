#ifndef LINE_H
#define LINE_H
#include "point.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Line
{
    private:
        Point a;
        Point b;
    public:
        Line(Point a, Point b);
        Line(const Line &other);
        bool equals (const Line &other);
        void flip();
        void move(double dx, double dy);
        string toString();
};
#endif