#include "memoria_instrucoes.h"
#define STRMAX 34

int contaLinhas(FILE** programa) {
    int count = 0;
    char dump[STRMAX];

    fseek(*programa, 0, SEEK_SET);

    while (!feof(*programa)) {
        count++;
        fgets(dump, 33, *programa);
    }

    return count;
}

void guardaPrograma(char* programaNome, MInst* memoria) {

    FILE* programa = fopen(programaNome, "r");

    memoria->n = contaLinhas(&programa);

    fseek(programa, 0, SEEK_SET);

    memoria->comando = malloc(sizeof(char*) * memoria->n);

    for (int i = 0; i < memoria->n; i++)
    {
        memoria->comando[i] = malloc(sizeof(char) * STRMAX);
    }
    

    for (int i = 0; i < memoria->n; i++) 
        fgets(memoria->comando[i], STRMAX - 1, programa);
    
    fclose(programa);
} // armazena todos os comandos do programa, linha a linha, no vetor de strings "comando"

void liberaMemoriaInst(MInst* memoria) {
    for (int i = 0; i < memoria->n; i++)
    {
        free(memoria->comando[i]);
    }

    free(memoria->comando);
}