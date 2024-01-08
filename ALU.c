#include "ALU.h"

float getSaida(ALU* alu) {
    return alu->s;
}

void setA(ALU* alu, float a) {
    alu->a = a;
}

void setB(ALU* alu, float b) {
    alu->b = b;
}

void soma(ALU* alu) {
    alu->s = alu->a + alu->b;
}

void subtrai(ALU* alu) {
    alu->s = alu->a - alu->b;
}

void multiplica(ALU* alu) {
    alu->s = alu->a * alu->b;
}

void divide(ALU* alu) {
    alu->s = alu->a / alu->b;
}

void igual(ALU* alu) {
    alu->s = alu->a == alu->b;
}

void maior(ALU* alu) {
    alu->s = alu->a > alu->b;
}

void maiorigual(ALU* alu) {
    alu->s = alu->a >= alu->b;
}
