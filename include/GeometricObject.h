#pragma once
#ifndef GEOMETRIC_OBJECT_H
#define GEOMETRIC_OBJECT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct GeometricObject { // abstract
    struct GeometricObject* instance;
    char* name;

    void (*setName)(struct GeometricObject*, char* name);
    void (*destroy)(struct GeometricObject*);
    
    double (*getArea)(struct GeometricObject*); // abstract
    double (*getPerimeter)(struct GeometricObject*); // abstract
    void (*print)(struct GeometricObject*); // abstract
} GeometricObject;

GeometricObject* newGeometricObject(char* name);

#endif
