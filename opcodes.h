#ifndef opcodes_h
#define opcodes_h

#include "leitor_de_programa.h"

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

#endif // opcodes_h