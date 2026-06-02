
#ifndef vector_h
#define vector_h

#include "struct.h"

Vector* initialize_vector();
void add_element(Vector *vector, float value);
void remove_last(Vector *vector);
float vector_value_at(Vector *vector, size_t index);
size_t size_of_vector(Vector *vector);
int is_vector_empty(Vector *vector);
void test_vector(float, float, float);

#endif