
#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

void test_vector(float f1, float f2, float f3){
    Vector *vector = initialize_vector();
    add_element(vector, f1);
    add_element(vector, f2);
    add_element(vector, f3);

    printf("Vector size: %zu\n", size_of_vector(vector));
    printf("Element at index 1: %f\n", vector_value_at(vector, 1));
    remove_last(vector);
    printf("New size is: %zu\n", size_of_vector(vector));
    printf("Vector empty? %d\n", is_vector_empty(vector));
    free(vector->data);
    free(vector);
}

Vector* initialize_vector(){
    Vector *vector = (Vector*)malloc(sizeof(Vector));
    vector->data = NULL;
    vector->size = 0;
    vector->capacity = 0;
    return vector;
}

void add_element(Vector *vector, float value) {
    if (vector->data == NULL) {
        vector->data = (float*)malloc(sizeof(float));
    }
    else if (vector->size >= vector->capacity) {
        vector->capacity += 2; // the tutorial just doubled, could change if not working
        vector->data = (float*)realloc(vector->data, vector->capacity*sizeof(float));
    }
    vector->data[vector->size] = value;
    vector->size++;
}

void remove_last(Vector *vector){ // Remove last element
    if (vector->size > 0){
        vector->size--;
        vector->capacity--;
        vector->data = (float*)realloc(vector->data, vector->capacity*sizeof(float));
    }
}



float vector_value_at(Vector *vector, size_t index){
    if(index >= vector->size){
        fprintf(stderr, "Vector index out of bounds\n");
        exit(1);
    }
    return (vector->data[index]);
}
size_t size_of_vector(Vector *vector){
    return(vector->size);
}

int is_vector_empty(Vector *vector){
    if(vector->size == 0){
        return(1);
    }
    else{
        return(0);
    }
}