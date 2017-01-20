/*
 * File: vector.c
 * Author: carvalhojldc - carvalhojldc@gmail.com
 *
 * Created on January 18, 2017
 *
 */

#include "vector.h"

int vector_init(vector *v) {
    v->size = 0;
    return 1;
}

void vector_free(vector *v) {
    free(v);
    v->size = 0;
}

int vector_push_back(vector *v, int data) {
    if( ( v->data = realloc( v->data, sizeof(int) * (v->size+1) ) ) == NULL ) {
        return -1;
    }

    v->data[ v->size ] = data;
    v->size++;

    return 1;
}

int vector_pop_back(vector *v) {
    int data;

    data = v->data[ v->size - 1 ];

    v->data = realloc( v->data, sizeof(int) * (v->size-1) );
    v->size--;

    return data;
}
