#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/**ESTRUTURA PARA REPRESENTAR O TOPO DA PILHA*/
struct pilhapri{
	PilhaNo* p;
};

/**STRUTURA QUE VAI ARMAZENAR UM LIVRO NA PILHA*/
struct pilhano{
	char* livro;
	PilhaNo* p;
};

/**FUN플O QUE CRIA A PILHA*/
PilhaPri* cria_pilha(){
	PilhaPri* pi=(PilhaPri*)malloc(sizeof(PilhaPri));
    if(pi==NULL){
        printf("Erro ao criar pilha!\n");
        exit(1);
    }
	pi->p=NULL;
	return pi;
}

/**FUN플O PARA INSERIR UM LIVRO NA PILHA*/
void inserePI(PilhaPri *pi,char* livro){
	PilhaNo* no = (PilhaNo*)malloc(sizeof(PilhaNo));
	if(no==NULL){
		printf("Erro ao alocar elemento na pilha!\n");
		exit(1);
	}else{
		no->livro = livro;
		no->p = pi->p;
		pi->p = no;
	}
}

/**FUN플O PARA ANALIZAR PILHA SE VAZIA OU N홒*/
int VaziaPI(PilhaPri* pi){
    if(pi->p==NULL){
        return 1;
    }else{
        return 0;
    }
}

/**FUN플O PARA EXIBIR A PILHA*/
void ExibePI(PilhaPri* pi){
    if(VaziaPI(pi)){
        printf("A pilha esta vazia!\n");
    }else{
        PilhaNo* aux;
        printf("\tPILHA DE LIVROS!\n");
        for(aux=pi->p;aux!=NULL;aux=aux->p){
            printf("\t*%s\n", aux->livro);
        }
    }
}

/**FUN플O PARA RETORNAR O ULTIMO LIVRO DA PILHA*/
char* pilha_retorna(PilhaPri* p){
    char* v;
    PilhaNo* no= p->p;
    v= no->livro;
    p->p=no->p;
    if(p->p==NULL){
        p->p=NULL;
    }
    free(no);
    return v;
}

/**FUN플O PARA LIBERAR A PILHA*/
void libera_pilha(PilhaPri* pi){
	PilhaNo* aux=pi->p;
	while(aux!=NULL){
		PilhaNo* aux2=aux->p;
		free(aux);
		aux=aux2;
	}
	free(pi);
	pi=NULL;
}
