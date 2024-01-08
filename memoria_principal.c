#include "memoria_principal.h"

void inicializa(MP* mp) {
    mp->memoria = fopen("memoria.dat", "wb+");
    mp->count = 0;
}

void fecha(MP* mp) {
    fclose(mp->memoria);
    mp->count = 0;
}

int read(MP* mp, int i, int tam, float* output) {
    if(i >= 2048)
        return 0;

    if(fseek(mp->memoria, i * sizeof(float), SEEK_SET))
        return 0;

    fread(output, sizeof(float), tam, mp->memoria);

    return 1;
}

int write(MP* mp, int i, int tam, float* input) {
    if (mp->count + tam >= 2048)
        return 0;
    
    if(fseek(mp->memoria, i * sizeof(float), SEEK_SET))
        return 0;

    mp->count += tam;
    fwrite(input, sizeof(float), tam, mp->memoria);

    return 1;
    
}