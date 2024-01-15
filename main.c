#include "leitor_de_programa.h"

int main() {

    FILE* programa;
    ALU arithmeticLogicUnit;
    BancoReg bancoDeRegistradores;
    MInst memoriaInstrucoes;
    MP memoriaPrincipal;

    Leitor leitor = {programa, &arithmeticLogicUnit, &bancoDeRegistradores, &memoriaInstrucoes, 0, 0, &memoriaPrincipal};

    inicializa(&memoriaPrincipal); // funcao da memoria principal para inicializar o arquivo de memória principal


    printf("TP2 BCC266\nAlunos: Marcelo Magalhães e Gustavo Ferreira\n");

    while(1) {
        printf("\n\nBem-vindo(a) ao emulador de processador\nEscolha um programa para executar.\n\n1.Primos de 0 a 100\n2.Calcula seno\n3.Calcula cosseno\n\nInforme a opcao desejada ou digite qualquer outro caracter para encerrar o emulador. ");

        char op, dump;

        scanf("%c", &op);
        scanf("%c", &dump); // captura o enter digitado após a opcao desejada
    
        if (op == '1')
            programa = fopen("programas/primos0a100.txt", "r");

        else if (op == '2')
            programa = fopen("programas/seno.txt", "r");

        else if (op == '3')
            programa = fopen("programas/cosseno.txt", "r");
            
        else
            break;

        guardaPrograma(programa, &memoriaInstrucoes);
        executaPrograma(&leitor);
        liberaMemoriaInst(&memoriaInstrucoes);
    }
    
    fecha(&memoriaPrincipal); // funcao da memoria principal que fecha o arquivo de memoria principal

    return 0;
}