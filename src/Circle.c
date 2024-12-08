#include "Circle.h"

    void (*print)(struct GeometricObject*);

double Circle_getArea(GeometricObject* object){
    Circle* circle = (Circle*) object->instance;
    return PI * circle->radius * circle->radius;
}

double Circle_getPerimeter(GeometricObject* object){
    Circle* circle = (Circle*) object->instance;
    return PI * 2.0 * circle->radius;
}

void Circle_destroy(GeometricObject* object){
    Circle* circle = (Circle*) object->instance;
    object->destroy(object);
    circle->instance = NULL;
    free(circle);
}

void Circle_print(GeometricObject* object){
    Circle* circle = (Circle*) object->instance;
    
    printf("%s {\n  radius: %f\n}\n",
        circle->obj->name,
        circle->radius
    );
}

double Circle_getCircumference(Circle* self){
    return PI * 2.0 * self->radius;
}

Circle* newCircle(double radius){
    Circle* self = (Circle*) malloc(sizeof(Circle));
    self->obj = newGeometricObject("Circle");
    self->obj->instance = self;

    self->obj->getArea = Circle_getArea;
    self->obj->getPerimeter = Circle_getPerimeter;
    self->obj->destroy = Circle_destroy;
    self->obj->print = Circle_print;

    self->radius = radius;
    self->getCircumference = Circle_getCircumference;

    return self;
}