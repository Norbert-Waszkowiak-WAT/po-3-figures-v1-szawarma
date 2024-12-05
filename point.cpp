#include "point.h"
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace std;

Point::Point (double x, double y) : x(x), y(y) {};

Point::Point(const Point &other) : x(other.x), y(other.y) {};

bool Point::equals (const Point &other)
{
    return other.x == x && other.y == y;
};

double Point::getX()
{
    return x;
};

double Point::getY()
{
    return y;
};

void Point::flip()
{
    x=-x;
    y=-y;
};

void Point::move(double dx, double dy)
{
    x=x+dx;
    y=y+dy;
};

string Point::toString()
{
    ostringstream oss;
    oss << fixed << setprecision(1);
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
};