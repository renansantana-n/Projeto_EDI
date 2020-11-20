#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include "interatividade.h"
#include "lista.h"
#include "fila.h"
#include "pilha.h"

int main(){
    int op;
    /**FUB«√O PARA UTILIZAR DAS PALAVRAS E PONTUA«’ES DA LINGUA PORTUGUESA*/
    setlocale(LC_ALL,"Portuguese");

    //system("color 02");
    /**CRIA«√O DA LISTA, FILA E PILHA*/
    ListaRoupa* lista   = cria_lista();
    ListaPe* lista2  = cria_Lrel();
    PilhaPri* pilha   = cria_pilha();
    FilaLI* filalista = cria_FilaLI();
    /**LA«O PARA REPETI«√O DO MEN⁄ AT… O USU¡RIO DESEJAR SAIR*/
    do{
        exibe();
        scanf("%d", &op);
        switch(op){
            case 1:
                    system("cls");
                    char* pessoa=(char*)malloc(100* sizeof(char));
                    char* peca=(char*)malloc(100* sizeof(char));

                    printf("\n\nDIGITE O NOME DO DOADOR: ");
                    fflush(stdin);
                    gets(pessoa);
                    fflush(stdin);
                    system("cls");
                    printf("\n\nQUAL PE«A DE ROUPA DESEJA DOAR?\n");
                    fflush(stdin);
                    gets(peca);
                    fflush(stdin);
                    fila_insere(filalista,pessoa, peca);
                    printf("\n\n\t\tAGUARDE");
                    load();
                    system("cls");
                    printf("\n\n\tPESSOA CADASTRADA COM SUCESSO!\n");
                    Sleep(2500);
                break;
            case 2:
                system("cls");
                fflush(stdin);
                char* livro=(char*)malloc(100*sizeof(char));
                printf("\n\n\tDIGITE O NOME DO LIVRO: ");
                gets(livro);
                inserePI(pilha,livro);
                printf("\n\tLIVRO EMPILHADO COM SUCESSO!");
                Sleep(2000);
                break;
            case 3:
                system("cls");
                if(fila_vazia(filalista)){
                    printf("\n\n\t\tA FILA EST¡ VAZIA!\n");
                    Sleep(2000);
                }else{
                    fila_exibe(filalista);
                    printf("\n\n");
                    system("pause");
                }
                break;
            case 4:
                system("cls");
                printf("\n\n");
                if(VaziaPI(pilha)){
                    printf("\nA PILHA DE LIVROS EST¡ VAZIA\n");
                    Sleep(2000);
                }else{
                    ExibePI(pilha);
                    system("pause");
                }
                break;
            case 5:
                system("cls");
                if(!(fila_vazia(filalista) || VaziaPI(pilha))){
                    char* p=(char*)malloc(100* sizeof(char));
                    char* l=(char*)malloc(100* sizeof(char));
                    char* r=(char*)malloc(100* sizeof(char));
                    p = fila_retiraP(filalista);
                    r = fila_retiraR(filalista);
                    l = pilha_retorna(pilha);
                    lista_rel(lista2,p,l);
                    insereLI(lista,r);
                    printf("\n\n\t\tAGUARDE ENQUANTO O PROCESSO DE DOACAO ESTA SENDO FEITO");
                    load();
                    system("cls");
                    printf("\n\n\tOPERACAO DE DOACAO FOI FEITA!\n");
                    Sleep(3000);
                }else{
                    printf("\nO PROCESSO DE DOA«√O AINDA N√O PODE SER FEITO!\n\n");
                    if(fila_vazia(filalista)){
                        printf("A FILA SE ENCONTA VAZIA.\n");
                    }
                    if(VaziaPI(pilha)){
                        printf("A PILHA SE ENCONTA VAZIA.\n");
                    }
                    printf("\n\n");
                    system("pause");
                }
                break;
            case 6:
                system("cls");
                if(lista_vazia(lista2)){
                    printf("\n\n\t… PRECISO FAZER PELO MENOS UMA DOA«√O!\n");
                    Sleep(2000);
                }else{
                    system("cls");
                    printf("\n");
                    ExibeInfo(lista2);
                    printf("\n\n");
                    system("pause");
                }
                break;
            case 7:
                system("cls");
                if(vaziaLI(lista)){
                    printf("\n\n\t… PRECISO FAZER PELO MENOS UMA DOA«√O!\n");
                    Sleep(2000);
                }else{
                    exibeLI(lista);
                    system("pause");
                }
                break;
            case 8:
                system("cls");
                if(lista_vazia(lista2)){
                    printf("\n\n… PRECISO FAZER PELO MENOS UMA DOA«√O PARA GERAR OS RELAT”RIOS!\n");
                    Sleep(3000);
                }else{
                    cria_arq(lista2,lista);
                    printf("\n\n\t\tAGUARDE");
                    load();
                    system("cls");
                    printf("\n\nARQUIVOS CRIADOS COM SUCESSO!!!\n");
                    Sleep(2500);
                }
                break;
            case 9:
                system("cls");
                printf("\n\n\t\tOBRIGADO!\n\n");
                break;
            default: system("cls");printf("OPCAO INVALIDA!\n");exibe();Sleep(2000);
        }
    }while(op!=9);
    Libera_lista(lista2);
    LiberaLista(lista);
    fila_libera(filalista);
    libera_pilha(pilha);
    return 0;
}
