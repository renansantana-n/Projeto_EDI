#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

//-------------------------------------------------------------------------//
//-----------------------------FILA COM LISTA------------------------------//
//-------------------------------------------------------------------------//

/**ESTRUTURA DA LISTA QUE VAI SER IMPLEMENTADA NA FILA*/
struct listaf{
    char* nome;
    char* roupa;
    ListaFI* p;
};

/**ESTRUTURA DA FILA*/
struct filal{
    ListaFI* ini;
    ListaFI* fim;
};

/**FUNÇÃO RESPONSÁVEL POR CRIAR A FILA*/
FilaLI* cria_FilaLI(){
    FilaLI* f = (FilaLI*)malloc(sizeof(FilaLI));
    if(f == NULL){
        printf("ERRO AO CRIAR FILA!\n");
        exit(1);
    }else{
        f->ini = f->fim = NULL;
        return f;
    }

}

/**FUNÇÃO PARA INSERIR UMA PESSOA NA FILA*/
void fila_insere(FilaLI* f,char* nome,char* roupa){
    ListaFI* n = (ListaFI*)malloc(sizeof(ListaFI));
    if(n == NULL){
        printf("ERRO AO INSERIR NA FILA!\n");
        exit(1);
    }else{
        n->nome=nome;
        n->roupa = roupa;
        n->p= NULL;
        if(f->fim!= NULL){
            f->fim->p = n;
        }else{
            f->ini = n;
        }
        f->fim = n;
    }
}

/**FUNÇÃO PARA VERIFICAR A VACUIDADE DA FILA*/
int fila_vazia(FilaLI* f){
    return (f->ini == NULL);
}

/**FUNÇÃO PARA RETIRAR A PESSOA DA FILA*/
char* fila_retiraP(FilaLI* f){
    char* v;
    if(fila_vazia(f)){
        printf("FILA VAZIA!\n");
        return NULL;
    }
    v = f->ini->nome;
    return v;
}

/**FUNÇÃO PARA RETIRAR A ROUPA DA PESSOA DA FILA*/
char* fila_retiraR(FilaLI* f){
    ListaFI* t;
    char* v;
    if(fila_vazia(f)){
        printf("FILA VAZIA!\n");
        return NULL;
    }
    t = f->ini;
    v = t->roupa;
    f->ini = t->p;
    if(f->ini == NULL){
        f->fim = NULL;
    }
    free(t);
    return v;
}

/**FUNÇÃO PARA EXIBIR QUEM ESTÁ NA FILA DE ESPERA PARA DOAR*/
void fila_exibe(FilaLI* f){
    ListaFI* q = f->ini;
    int i=1;
    printf("\nFILA DE PESSOAS NA ESPERA PARA DOAR\n");
    while(q != NULL){
        ListaFI* t = q->p;
        printf("\t%d° - %s\n",i, q->nome);
        i++;
        q = t;
    }
}

/**FUNÇÃO RESPONSÁVEL POR LIBERAR A FILA DA MEMORIA*/
void fila_libera(FilaLI* f){
    ListaFI* q = f->ini;
    while(q != NULL){
        ListaFI* t = q->p;
        free(q);
        q = t;
    }
    free(f);
}
