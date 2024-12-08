#include "Circle.h"

int main(){
    Circle *circle = newCircle(0.5);

    double c = circle->getCircumference(circle);
    circle->obj->print(circle->obj);

    printf("Circumference: %f", c);

    return 0;
}