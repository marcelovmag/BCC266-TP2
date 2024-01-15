#ifndef ALU_H
#define ALU_H

typedef struct alu
{
    float a, b, acc; 
} ALU;

float getACC(ALU*);

void setA(ALU*, float);

void setB(ALU*, float);

void soma(ALU*);

void subtrai(ALU*);

void multiplica(ALU*);

void divide(ALU*);

void resto(ALU*);

void igual(ALU*);

void menor(ALU*);

#endif // ALU_H