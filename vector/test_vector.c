#include <stdio.h>

#include "vector.h"

int main(int argc, char const *argv[]) {

    vector *v = (vector *) malloc( sizeof(vector) );

    vector_init(v);

    vector_push_back(v, 12);
    vector_push_back(v, 1);
    vector_push_back(v, 14);

    printf("Size: %d\n", v->size);
    
    vector_pop_back(v);

    printf("Size: %d\n", v->size);

    int i;
    for(i=0; i<v->size; i++)
        printf("%d\n", v->data[i]);

    vector_clear(v);
    free(v);

    return 0;
}
