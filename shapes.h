#ifndef __shapes__
#define __shapes__

#include <stdio.h>

using namespace std;
class Shape
{
   public:

    virtual double area()=0;
    virtual double perimeter()=0;
    virtual double width()=0;
    virtual double height()=0;
    virtual void rotate()=0;

};


class Rectangle: public Shape
{
public:
    Rectangle(double h, double w);
    double area();
    double perimeter();
    double width();
    double height();
    void rotate();
private:
    double pri_height;
    double pri_width;

};

class Square: public Rectangle
{
public:
     Square(double l);

private:
    double length;

};


class Circle: public Shape
{
public:
    Circle(double r);
    double area();
    double perimeter();
    double width();
    double height();
    void rotate();
private:
    double radius;

};


#endif
