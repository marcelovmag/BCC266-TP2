#include "leitor_de_programa.h"

#define ALU leitor->alu
#define R1 leitor->banco->registrador[re1]
#define R2 leitor->banco->registrador[re2]

void add(Leitor* leitor, int re1, int re2) {
    setA(ALU, R1);
    setB(ALU, R2);
    soma(ALU);
}

void sub(Leitor* leitor, int re1, int re2) {
    setA(ALU, R1);
    setB(ALU, R2);
    subtrai(ALU);
}

void mul(Leitor* leitor, int re1, int re2) {
    setA(ALU, R1);
    setB(ALU, R2);
    multiplica(ALU);
}

void divi(Leitor* leitor, int re1, int re2) {
    setA(ALU, R1);
    setB(ALU, R2);
    divide(ALU);
}

void rem(Leitor* leitor, int re1, int re2) {
    setA(ALU, R1);
    setB(ALU, R2);
    resto(ALU);
}


void sto(Leitor* leitor, int re1) {
    R1 = getACC(ALU);
}

void sti(Leitor* leitor, int re1, float valor) {
    R1 = valor;
}


void beq(Leitor* leitor, int re1, int re2, int linha) {
    setA(ALU, R1);
    setB(ALU, R2);
    igual(ALU);
    
    if (getACC(ALU))
        leitor->linha = linha - 1;
}

void blt(Leitor* leitor, int re1, int re2, int linha) {
    setA(ALU, R1);
    setB(ALU, R2);
    menor(ALU);
    
    if (getACC(ALU))
        leitor->linha = linha - 1;
}

void jmp(Leitor* leitor, int linha) {
    leitor->linha = linha - 1;
}

void dsp(Leitor* leitor) {
    printf("\n%.3f", getACC(ALU));
}