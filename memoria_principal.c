#include "memoria_principal.h"

void inicializa(MP* mp) {
    mp->memoria = fopen("memoria.dat", "wb+");
    mp->count = 0;
} // inicializa a memoria principal (abre o arquivo)

void fecha(MP* mp) {
    fclose(mp->memoria);
    mp->count = 0;
} // encerra o acesso à memória principal (fecha o arquivo)

int read(MP* mp, int i, int tam, float* output) {
    if(i >= 2048)
        return 0;

    if(fseek(mp->memoria, i * sizeof(float), SEEK_SET))
        return 0;

    fread(output, sizeof(float), tam, mp->memoria);

    return 1;
} // le o "i-esimo" float armazenado na memoria principal e retorna-os a partir do ponteiro output

int write(MP* mp, int i, int tam, float* input) {
    if (mp->count + tam >= 2048)
        return 0;
    
    if(fseek(mp->memoria, i * sizeof(float), SEEK_SET))
        return 0;

    mp->count += tam;
    fwrite(input, sizeof(float), tam, mp->memoria);

    return 1;
    
} // escreve i floats armazenados a partir do ponteiro input