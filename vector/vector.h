/*
 * File: vector.h
 * Author: carvalhojldc - carvalhojldc@gmail.com
 *
 * Created on January 18, 2017
 *
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

typedef struct {
    int* data;
    size_t size;
} vector;

int vector_init(vector *v);

void vector_free(vector *v);

int vector_push_back(vector *v, int data);

int vector_pop_back(vector *v);

#endif /* VECTOR_H */
