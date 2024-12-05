#include "line.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

Line::Line(Point a, Point b) : a(a), b(b) {};

Line::Line(const Line &other) : a(other.a), b(other.b) {};

bool Line::equals (const Line &other)
{
    return a.equals(other.a) && b.equals(other.b);
};

void Line::flip()
{
    a.flip();
    b.flip();
};

void Line::move(double dx, double dy)
{
    a.move(dx, dy);
    b.move(dx, dy);
};

string Line::toString() 
{
        return "Line(" + a.toString() + ", " + b.toString()+")";
};