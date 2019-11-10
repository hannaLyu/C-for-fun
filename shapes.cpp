#include "shapes.h"
#include <cmath>

double const pi= 3.14;
Rectangle::Rectangle(double h, double w){
    pri_height = h;
    pri_width = w;
}


double Rectangle::height(){
    return pri_height;
}

double Rectangle::width(){
    return pri_width;
}

double Rectangle::area(){
    return pri_width*pri_height;
}

double Rectangle::perimeter(){
    return(pri_width+pri_height)*2;
}

void Rectangle::rotate(){
    double k;
    k= pri_width;
    pri_width= pri_height;
    pri_height= k;
}
Square::Square(double l):Rectangle(l,l){
    length=l;
}

Circle::Circle(double r){
    radius = r;
}

double Circle::area(){
    return radius*radius*pi;
}

double Circle::perimeter(){
    return 2*pi*radius;
}

double Circle::height(){
    return 2*radius;
}

double Circle::width(){
    return 2*radius;
}

void Circle::rotate(){
    return;
}
