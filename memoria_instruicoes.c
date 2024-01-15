#include "libs/memoria_instrucoes.h"

int contaLinhas(FILE* programa) {
    int count = 0;
    char dump[11];

    while (!feof(programa)) {
        count++;
        fgets(dump, 10, programa);
    }
}

void guardaPrograma(FILE* programa, MInst** memoria) {
    fseek(programa, 0, SEEK_SET);

    int n = contaLinhas(programa);

    fseek(programa, 0, SEEK_SET);

    *memoria = malloc(sizeof(MInst) * n);

    for (int i = 0; i < n; i++)
    {
        fgets((*memoria)[i].comando, 10, programa);
        (*memoria)[i].linha = n;
    }
    
} // armazena todos os comandos do programa, linha a linha, em um vetor

void liberaMemoriaInst(MInst** memoria) {
    free(*memoria);
}