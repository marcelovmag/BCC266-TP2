#ifndef ALU_H
#define ALU_H

typedef struct alu
{
    int a, b, s; 
} ALU;

float getSaida(ALU*);

void setA(ALU*, float);

void setB(ALU*, float);

void soma(ALU*);

void subtrai(ALU*);

void multiplica(ALU*);

void divide(ALU*);

void igual(ALU*);

void maior(ALU*);

void maiorigual(ALU*);

#endif // ALU_H