#include "triangle.h"
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

Triangle::Triangle(Point a, Point b, Point c) : a(a), b(b), c(c) {}

Triangle::Triangle(const Triangle &other) : a(other.a), b(other.b), c(other.c) {}

bool Triangle::equals(const Triangle &other) 
{
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c);
}

void Triangle::flip() 
{
    a.flip();
    b.flip();
    c.flip();
}

void Triangle::move(double dx, double dy) 
{
    a.move(dx, dy);
    b.move(dx, dy);
    c.move(dx, dy);
}

double Triangle::getSurface() 
{
    double ab = sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
    double bc = sqrt(pow(c.getX() - b.getX(), 2) + pow(c.getY() - b.getY(), 2));
    double ca = sqrt(pow(a.getX() - c.getX(), 2) + pow(a.getY() - c.getY(), 2));

    double s = (ab + bc + ca) / 2;

    return sqrt(s * (s - ab) * (s - bc) * (s - ca));
}

string Triangle::toString() 
{
    ostringstream oss;
    oss << fixed << setprecision(1);
    oss << "Triangle(" << a.toString() << ", " << b.toString() << ", " << c.toString() << ")";
    return oss.str();
}

bool Triangle::equals(Figure* other) 
{
    Triangle* otherTriangle = dynamic_cast<Triangle*>(other);
    if (otherTriangle == nullptr) {
        return false;
    }
    return (a->equals(otherTriangle->a) && b->equals(otherTriangle->b) && c->equals(otherTriangle->c));
}
