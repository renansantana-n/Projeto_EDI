#include "interatividade.h"
#include <windows.h>
#include <stdio.h>

/**FUN��O PARA EXIBIR O MEN� PRINCIPAL*/
void exibe(){
    system("cls");
    printf("\n\n\t\t\tMENU INICIAL\n");
    printf("\t-------------------------------------------\n");
    printf("\t|  1  -  CADASTAR PESSOA NA FILA          |\n");
    printf("\t|  2  -  INSERIR LIVRO NA PILHA           |\n");
    printf("\t|  3  -  EXIBIR A FILA DE PESSOAS         |\n");
    printf("\t|  4  -  EXIBIR A PILHA DE LIVROS         |\n");
    printf("\t|  5  -  DOAR                             |\n");
    printf("\t|  6  -  EXIBIR INFORMA��ES DA DOA��O     |\n");
    printf("\t|  7  -  EXIBIR A LISTA DE ROUPAS         |\n");
    printf("\t|  8  -  GERAR RELATORIOS DE DOA��O       |\n");
    printf("\t|  9  -  SAIR                             |\n");
    printf("\t-------------------------------------------\n");
    printf("\nESCOLHA: ");
}

/**FUN��O PARA EXIBIR AS OP��ES DE ROUPA PARA SER DOARA*/
void menuroupa(){
    printf("\tESCOLHA PELA NUMERA��O DA ROUPA!\n");
    printf("\t1 - BLUSA\n");
    printf("\t2 - CAL�A\n");
    printf("\t3 - SHORT\n");
    printf("\t4 - CAL�ADO\n");
    printf("\nESCOLHA: ");
}

/**FUN��O PARA EXIBIR O EFEITO DE LOADING*/
void load(){
    int i;
    for(i=0;i<5;i++){
        printf(".");
        Sleep(400);
    }
}
