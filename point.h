#ifndef POINT_H
#define POINT_H
#include <string>

using namespace std;

class Point
{
    private:
        double x;
        double y;
    
    public:
        Point(double x, double y);
        Point(const Point &other);
        bool equals (const Point &other);
        void move(double dx, double dy);
        void flip();
        string toString();
        double getX();
        double getY();
};
#endif