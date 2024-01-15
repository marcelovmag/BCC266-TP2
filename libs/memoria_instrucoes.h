#ifndef memoria_instrucoes_h
#define memoria_instrucoes_h

#include <stdio.h>

typedef struct memoria_instrucoes {
    char* comando;
    int linha;
} MInst;

int contaLinhas(FILE*);

void guardaPrograma(FILE*, MInst**);

void liberaMemoriaInst(MInst**);

#endif