#include "Circle.h"

int main(){
    Circle *circle = newCircle(1.0);

    double c = circle->getCircumference(circle);
    double p = circle->obj->getPerimeter(circle->obj);
    double a = circle->obj->getArea(circle->obj);
    
    circle->obj->print(circle->obj);

    printf("Circumference: %f\n", c);
    printf("Perimeter: %f\n", p);
    printf("Area: %f\n", a);

    return 0;
}