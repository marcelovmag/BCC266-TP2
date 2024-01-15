#include "leitor_de_programa.h"
#include <string.h>
#include <stdlib.h>

#define comando leitor->minst->comando
#define linha leitor->linha
#define n leitor->minst->n

Leitor newLeitor(ALU* alu, BancoReg* banco, MInst* mi, MP* mp) {
    Leitor leitor = {alu, banco, mi, 0, mp};
    return leitor;
}

void executaPrograma(Leitor* leitor) {
    
    linha = 0;

    char opc[4];

    while (linha < n)
    {   
        for (int i = 0; i < 3; i++)
        {
            opc[i] = comando[linha][i];
        }
        opc[4] = '\0';

        int i = 5;

        if (!strcmp(opc, "ADD"))
        {
            char arg1[10], arg2[10]; // Os 2 argumentos necessarios para o opcode ADD
            int i1 = 0, i2 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            int r2 = atoi(arg2);

            add(leitor, r1, r2); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "SUB"))
        {
            char arg1[10], arg2[10]; // Os 2 argumentos necessarios para o opcode SUB
            int i1 = 0, i2 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            int r2 = atoi(arg2);

            sub(leitor, r1, r2); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "MUL"))
        {
            char arg1[10], arg2[10]; // Os 2 argumentos necessarios para o opcode MUL
            int i1 = 0, i2 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            int r2 = atoi(arg2);

            mul(leitor, r1, r2); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "DIV"))
        {
            char arg1[10], arg2[10]; // Os 2 argumentos necessarios para o opcode DIV
            int i1 = 0, i2 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            int r2 = atoi(arg2);

            divi(leitor, r1, r2); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "REM"))
        {
            char arg1[10], arg2[10]; // Os 2 argumentos necessarios para o opcode REM
            int i1 = 0, i2 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            int r2 = atoi(arg2);

            rem(leitor, r1, r2); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "STO"))
        {
            char arg[10]; // O argumento necessario para o opcode STO
            int i1 = 0; // Indice para a string arg

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg[i1] = '\0'; // Finaliza a string


            int r1 = atoi(arg);

            sto(leitor, r1); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "STI"))
        {
            char arg1[10], arg2[10]; // Os 2 argumentos necessarios para o opcode STI
            int i1 = 0, i2 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            float valor = atof(arg2);

            sti(leitor, r1, valor); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "BEQ"))
        {
            char arg1[10], arg2[10], arg3[10]; // Os 3 argumentos necessarios para o opcode BEQ
            int i1 = 0, i2 = 0, i3 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg3[i3] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i3++; // Incrementa o indice da string do argumento
            }
            arg3[i3] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            int r2 = atoi(arg2);
            int l = atoi(arg3);

            beq(leitor, r1, r2, l); // Executa a funcao relativa ao opcode com os devidos argumentos
        }

        else if (!strcmp(opc, "BLT"))
        {
            char arg1[10], arg2[10], arg3[10]; // Os 3 argumentos necessarios para o opcode BLT
            int i1 = 0, i2 = 0, i3 = 0; // Indices para cada uma das strings "arg"

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg2[i2] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i2++; // Incrementa o indice da string do argumento
            }
            arg2[i2] = '\0'; // Finaliza a string
            i++;

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            { 
                arg3[i3] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i3++; // Incrementa o indice da string do argumento
            }
            arg3[i3] = '\0'; // Finaliza a string

            int r1 = atoi(arg1);
            int r2 = atoi(arg2);
            int l = atoi(arg3);

            blt(leitor, r1, r2, l); // Executa a funcao relativa ao opcode com os devidos argumentos
        }

        else if (!strcmp(opc, "JMP"))
        {
            char arg1[10]; // O argumento necessario para o opcode JMP
            int i1 = 0; // Indice para a string arg

            while (comando[linha][i] != ' ' && comando[linha][i] != '\n' && comando[linha][i] != '\0') // testa o fim do argumento
            {
                arg1[i1] = comando[linha][i];

                i++; // Incrementa o indice da string do comando inteiro
                i1++; // Incrementa o indice da string do argumento
            }
            arg1[i1] = '\0'; // Finaliza a string

            int l = atoi(arg1);

            jmp(leitor, l); // Executa a funcao relativa ao opcode com os devidos argumentos 
        }

        else if (!strcmp(opc, "DSP"))
        {
            dsp(leitor);
        }

        else
            printf("\nComando inválido. Linha: %d. Comando: \"%s\"", linha, opc);
        

        linha++;
    }
    
    
}