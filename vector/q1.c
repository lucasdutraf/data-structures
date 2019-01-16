#include <stdio.h>
#include <stdlib.h>

typedef struct Vector {
    int capacity;
    int size;
    int * elements;
}Vector;

Vector create(int capacity) {
    Vector v;
    v.capacity = capacity;
    v.size = 0;
    v.elements = (int *) malloc(capacity * sizeof(int));
    return v;
}

void destroy (Vector * vector) {
    free(vector->elements);
    vector->elements = NULL;
    vector->capacity = 0;
    vector->size = 0;
}

void push_back(Vector * vector, int new_element) {
    if (vector->capacity == vector->size) {
        vector->elements = (int *) realloc(vector->elements, (2 * vector->capacity) * sizeof(int));
        vector->capacity *= 2;
        vector->elements[vector->size++] = new_element;
        vector->size++;
    }
    else {
        vector->elements[vector->size++] = new_element;
        vector->size++;
    }
}

int at(Vector * vector, int value) {
    return vector->elements[value];
}

void pop_back(Vector * vector) {
    if(vector->size > 0) {
        vector->size--;
    }
}

unsigned int capacity(Vector * vector) {
    return vector->capacity;
}

unsigned int size(Vector * vector) {
    return vector->size;
}

void print(Vector * vector) {
    printf("[");
    for(int i = 0; i < vector->size; ++i) {
        printf("%d ", at(vector, i));
    }
    printf("]\n");
}

void erase(Vector * vector, int i){
    if(vector->size > i){
        for(int j = i; j < vector->size; j++){
            vector->elements[j] = vector->elements[j+1];
        }
        vector->size--;
    }
}

int main() {
    Vector v1 = create(10);

    print(&v1);

    for (int i = 0; i < 15; ++i) {
        push_back(&v1, i*2);
    }
    print(&v1);

    // for (int i = 0; i < 3; ++i) {
    //     pop_back(&v1);
    // }
    // print(&v1);

    // for (int i = 0; i < 20; i+=3) {
    //     erase(&v1, i);
    // }

    // for (int i = 0; i < 20; i++) {
    //     erase(&v1, i);
    // }
    // print(&v1);

    // clear(&v1);
    // for (int i = 0; i < 8; ++i) {
    //     push_back(&v1, i*3 + 1);
    // }
    // print(&v1);

    // printf("v1[3] = %d\n", at(&v1, 3));
    // printf("v1[4] = %d\n", at(&v1, 4));
    // printf("v1[6] = %d\n", at(&v1, 6));
    // printf("v1[7] = %d\n", at(&v1, 7));

    // printf("\nfront: %d :: back: %d\n", front(&v1), back(&v1));

    // destroy(&v1);

    return 0;
}
