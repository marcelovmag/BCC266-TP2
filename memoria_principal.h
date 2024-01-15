#ifndef memoria_principal_h
#define memoria_principal_h

#include <stdio.h>

typedef struct memoria_principal {
    FILE* memoria;
    int count;
} MP;

void inicializa(MP*);

void fecha(MP*);

int read(MP*, float, int, float*);

int write(MP*, float, int, float*);

#endif