#include "ALU.h"

float getACC(ALU* alu) {
    return alu->acc;
}

void setA(ALU* alu, float a) {
    alu->a = a;
}

void setB(ALU* alu, float b) {
    alu->b = b;
}

void soma(ALU* alu) {
    alu->acc = alu->a + alu->b;
}

void subtrai(ALU* alu) {
    alu->acc = alu->a - alu->b;
}

void multiplica(ALU* alu) {
    alu->acc = alu->a * alu->b;
}

void divide(ALU* alu) {
    alu->acc = alu->a / alu->b;
}

void resto(ALU* alu) {
    alu->acc = (int) alu->a % (int) alu->b;
}

void igual(ALU* alu) {
    alu->acc = alu->a == alu->b;
}

void menor(ALU* alu) {
    alu->acc = alu->a < alu->b;
}
