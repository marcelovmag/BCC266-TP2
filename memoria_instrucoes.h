#ifndef memoria_instrucoes_h
#define memoria_instrucoes_h

#include <stdlib.h>
#include <stdio.h>

typedef struct memoria_instrucoes {
    char** comando;
    int n;
} MInst;

void guardaPrograma(char*, MInst*);

void liberaMemoriaInst(MInst*);

#endif