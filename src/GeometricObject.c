#include "GeometricObject.h"

void GeometricObject_setName(GeometricObject *self, char* name){
    free(self->name);
    self->name = strdup(name);
}

void GeometricObject_destroy(GeometricObject *self){
    self->instance = NULL;
    free(self->name);
    free(self);
}

GeometricObject* newGeometricObject(char* name){
    GeometricObject* self = (GeometricObject*) malloc(sizeof(GeometricObject));
    self->name = strdup(name);
    return self;
}