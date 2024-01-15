#ifndef leitor_de_programa_H
#define leitor_de_programa_H

#include "ALU.h"
#include "banco_registradores.h"
#include "memoria_instrucoes.h"
#include "memoria_principal.h"

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

void add(Leitor*, int, int);

void sub(Leitor*, int, int);

void mul(Leitor*, int, int);

void divi(Leitor*, int, int);

void rem(Leitor*, int, int);


void sto(Leitor*, int);

void sti(Leitor*, int, float);


void beq(Leitor*, int, int, int);

void blt(Leitor*, int, int, int);

void jmp(Leitor*, int);

void dsp(Leitor*);

#endif // leitor_de_programa_H