
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "mathing.h"
#include "struct.h"
#include "vector.h"

typedef struct Perceptron {
    float weight;
    float value_h;
    float input_x;
}Perceptron;

typedef struct MLP {
    Perceptron *perceptron;
}MLP;

int main(void) {
    float test = sigmoid(1.0,1.0);
    test_vector(2.2, 5.69, 420.69);
}


float sigmoid(float h, float weight){
    
}

float dot(Vector *vector_x, Vector *vector_weight){ // Not tested
    size_t size_x = size_of_vector(vector_x);
    size_t size_w = size_of_vector(vector_weight);
    if(size_x != size_w) {
        fprintf(stderr, "Weight and input vectors not same size");
        exit(-1);
    }
    float dot_product = 0;
    for(int i = 0; i < size_x; i++) {
        float product = 0;
        float value_x = vector_value_at(vector_x, i);
        float value_weight = vector_value_at(vector_weight, i);
        product = value_x * value_weight;
        dot_product += product;
    }
    return dot_product;
}


/*
Define vectors
Dot product calculation 

initialize params

forward

backward

step

optimizer

loss function

perceptron

input

*/