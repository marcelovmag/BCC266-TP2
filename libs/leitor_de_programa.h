#ifndef leitor_de_programa_H
#define leitor_de_programa_H

#include "ALU.h"
#include "banco_registradores.h"
#include "memoria_instrucoes.h"
#include "memoria_principal.h"
#include "opcodes.h"

typedef struct leitor_de_programa
{
    FILE* programa;

    ALU* alu;
    BancoReg* banco;

    MInst* minst;
    int linha, n;

    MP* memoriaPrincipal;
} Leitor;

void executaPrograma(Leitor* leitor);

#endif // leitor_de_programa_H