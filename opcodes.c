#include "opcodes.h"

#define ALU leitor->alu
#define R1 leitor->banco->registrador[r1]
#define R2 leitor->banco->registrador[r2]

void add(Leitor* leitor, int r1, int r2) {
    setA(ALU, R1);
    setB(ALU, R2);
    soma(ALU);
}

void sub(Leitor* leitor, int r1, int r2) {
    setA(ALU, R1);
    setB(ALU, R2);
    subtrai(ALU);
}

void mul(Leitor* leitor, int r1, int r2) {
    setA(ALU, R1);
    setB(ALU, R2);
    multiplica(ALU);
}

void div(Leitor* leitor, int r1, int r2) {
    setA(ALU, R1);
    setB(ALU, R2);
    divide(ALU);
}

void rem(Leitor* leitor, int r1, int r2) {
    setA(ALU, R1);
    setB(ALU, R2);
    resto(ALU);
}


void sto(Leitor* leitor, int r1) {
    R1 = getACC(ALU);
}

void sti(Leitor* leitor, int r1, float valor) {
    R1 = valor;
}


void beq(Leitor* leitor, int r1, int r2, int linha) {
    setA(ALU, R1);
    setB(ALU, R2);
    igual(ALU);
    
    if (getACC(ALU))
        leitor->linha = linha - 1;
}

void blt(Leitor* leitor, int r1, int r2, int linha) {
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