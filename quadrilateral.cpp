#include "quadrilateral.h"
#include <cmath>
#include <sstream>
#include <iomanip>

Quadrilateral::Quadrilateral(Point a, Point b, Point c, Point d) : a(a), b(b), c(c), d(d) {}

Quadrilateral::Quadrilateral(const Quadrilateral &other) : a(other.a), b(other.b), c(other.c), d(other.d) {}

bool Quadrilateral::equals(const Quadrilateral &other) {
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c) && d.equals(other.d);
}

void Quadrilateral::flip() {
    a.flip();
    b.flip();
    c.flip();
    d.flip();
}

void Quadrilateral::move(double dx, double dy) {
    a.move(dx, dy);
    b.move(dx, dy);
    c.move(dx, dy);
    d.move(dx, dy);
}

double Quadrilateral::getSurface() 
{
    double triangle1 = 0.5 * std::abs(a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY()
                                      - b.getX() * a.getY() - c.getX() * b.getY() - a.getX() * c.getY());

    double triangle2 = 0.5 * std::abs(a.getX() * c.getY() + c.getX() * d.getY() + d.getX() * a.getY()
                                      - c.getX() * a.getY() - d.getX() * c.getY() - a.getX() * d.getY());

    return triangle1 + triangle2;
}

std::string Quadrilateral::toString() 
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1);
    oss << "Quadrilateral(" << a.toString() << ", " << b.toString() << ", " 
        << c.toString() << ", " << d.toString() << ")";
    return oss.str();
}
