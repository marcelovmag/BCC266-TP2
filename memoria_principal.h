#ifndef memoria_principal_h
#define memoria_principal_h

#include <stdio.h>

typedef struct memoria_principal {
    FILE* memoria;
    int count;
} MP;

void inicializa(MP*);

void fecha(MP*);

float read(MP*, int);

void write(MP*, int, float);

#endif