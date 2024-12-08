#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "GeometricObject.h"

#define PI 3.14159265359

typedef struct Circle {
    struct Circle* instance;
    GeometricObject* obj;
    double radius;

    double (*getCircumference)(struct Circle*);
} Circle;

Circle* newCircle(double radius);

#endif
