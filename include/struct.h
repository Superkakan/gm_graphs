#ifndef struct_h
#define struct_h

#include <stdio.h>

typedef struct Vector{
    float *data; // Pointer to the array
    size_t size;
    size_t capacity;
}Vector;

#endif