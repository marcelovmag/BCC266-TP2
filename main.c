#include "leitor_de_programa.h"
#include <string.h>

int main() {

    ALU arithmeticLogicUnit;
    BancoReg bancoDeRegistradores;
    MInst memoriaInstrucoes;
    MP memoriaPrincipal;
    Leitor leitor;

    inicializa(&memoriaPrincipal); // funcao da memoria principal para inicializar o arquivo de memória principal


    printf("TP2 BCC266\nAlunos: Gustavo Ferreira e Marcelo Magalhães\n");

    while(1) {
        printf("\n\nBem-vindo(a) ao emulador de processador\nEscolha um programa para executar.\n\n1.Primos de 0 a 100\n2.Calcula seno\n3.Calcula cosseno\n\nInforme a opcao desejada ou digite qualquer outro caracter para encerrar o emulador. ");

        char op, dump;
        char programa[34];

        scanf("%c", &op);
        scanf("%c", &dump); // captura o enter digitado após a opcao desejada
    
        if (op == '1')
            strcpy(programa, "programas/primos0a100.txt");

        else if (op == '2')
            strcpy(programa, "programas/seno.txt");

        else if (op == '3')
            strcpy(programa, "programas/cosseno.txt");
            
        else
            break;

        guardaPrograma(programa, &memoriaInstrucoes);
        printf("guardaPrograma: OK\n");

        leitor = newLeitor(&arithmeticLogicUnit, &bancoDeRegistradores, &memoriaInstrucoes, &memoriaPrincipal);
        printf("newLeitor: OK\n");

        executaPrograma(&leitor);
        printf("executaPrograma: OK\n");

        liberaMemoriaInst(&memoriaInstrucoes);
        printf("liberaMemoriaInst: OK\n");
    }
    
    fecha(&memoriaPrincipal); // funcao da memoria principal que fecha o arquivo de memoria principal

    return 0;
}