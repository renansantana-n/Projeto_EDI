#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "fila.h"

/**ESTRUTURA DA LISTA PARA O ARQUIVO FINAL*/
struct listapessoa{
    ListaR* p;
};

/**ESTRUTURA DA LISTA PARA OS DADOS DOS ARQUIVOS FINAIS*/
struct dados{
    char* nome;
    char* livro;
};

/**ESTRUTURA DA LISTA PARA GERAR OS ARQUIVOS FINAIS*/
struct listar{
    Ldados d;
    ListaR* p;
};

/**FUNÇÃO PARA CRIAR A LISTA GERADORA DOS ARQUIVOS FINAIS*/
ListaPe* cria_Lrel(){
    ListaPe* l = (ListaPe*)malloc(sizeof(ListaPe));
    if(l==NULL){
        printf("ERRO AO CRIAR LISTA!\n");
        exit(1);
    }else{
        l->p=NULL;
    }
    return l;
}

/**FUNÇÃO PARA VERIFICAR SE A LISTA DE RELATÓRIO ESTÁ VAZIA*/
int lista_vazia(ListaPe* L){
    if(L->p==NULL){
        return 1;
    }else{
        return 0;
    }
}

/**ESTRUTURA DA CABEÇA DA LISTA PARA AS ROUPAS QUE IRÃO SER DOADAS*/
struct listaroupa{
    ListaNo* p;
};

/**ESTRUTURA PARA ARMAZENAR AS ROUPAS QUE VAO SER DOADAS*/
struct listano{
    char* roupa;
    ListaNo* p;
};

/**FUNÇÃO PARA CRIAR A CABEÇA DA LISTA*/
ListaRoupa* cria_lista(){
    ListaRoupa* p = (ListaRoupa*)malloc(sizeof(ListaRoupa));
    if(p==NULL){
        system("cls");
        printf("ERRO AO CRIAR LISTA!\n");
        exit(1);
    }
    p->p=NULL;
    return p;
}

/**FUNÇÃO PARA VERIFICAR SE A LISTA ESTÁ VAZIA OU NÃO*/
int vaziaLI(ListaRoupa* L){
    if(L->p==NULL){
        return 1;
    }else{
        return 0;
    }
}

/**FUNÇÃO PARA INSERIR ROUPA NA LISTA DEPOIS DE DOADA*/
void insereLI(ListaRoupa* L,char* roupa){
    ListaNo* novo = (ListaNo*)malloc(sizeof(ListaNo));
    if(novo==NULL){
        printf("ERRO AO INSERIR ROUPA NA LISTA!\n");
        exit(1);
    }else{
        novo->roupa=roupa;
        novo->p=NULL;
        if(L->p==NULL){
            L->p=novo;
        }else{
            novo->p = L->p;
        }
    }
}
/**FUNÇÃO PARA RETORNAR UMA ROUPA DA LISTA*/
char* retorna_roupa(ListaRoupa* li){
    ListaNo* no = li->p;
    char* v;
    v = no->roupa;
    li->p=no->p;
    if(li->p==NULL){
        li->p=NULL;
    }
    free(no);
    return v;
}

/**FUNÇÃO PARA INSERIR AS INFORMAÇÕES NA LISTA PARA GERAR OS ARQUIVOS FINAIS*/
void lista_rel(ListaPe* li,char* nome, char* livro){
    ListaR* novo=(ListaR*)malloc(sizeof(ListaR));
    if(novo==NULL){
        printf("ERRO AO ALOCAR ELEMENTO NA LISTA!\n");
        exit(1);
    }
    novo->d.nome = nome;
    novo->d.livro = livro;
    novo->p=NULL;
    if(li->p==NULL){
        li->p=novo;
    }else{
        novo->p=li->p;
        li->p=novo;
    }
}

/**FUNÇÃO PARA EXIBIR A LISTA*/
void exibeLI(ListaRoupa* lr){
   ListaRoupa * q = lr;

   printf("\n");
   while( q != NULL){
    listaRoupa * t = q->p;
    printf("\t*%s\n", q ->roupa);
    q = t;
   }
}

/**FUNÇÃO PARA EXIBIR AS INFORMAÇÕES DA DOAÇÃO*/
void ExibeInfo(ListaPe* lp){
    ListaR* aux2;
    printf("\n\tLISTA DE PESSOAS QUE DOARAM!\n\n");
    for(aux2=lp->p;aux2!=NULL;aux2=aux2->p){
        printf("\t*nome: %s\n", aux2->d.nome);
        printf("\t*livro recebido: %s\n\n", aux2->d.livro);
    }

}

/**FUNÇÃO PARA CRIAR O ARQUIVO DO RELATORIO*/
void cria_arq(ListaPe* li, ListaRoupa* lr){
    ListaR* aux;
    ListaNo* aux2;
    //VERIFICA A EXISTENCIA DO ARQUIVO PARA EXCLUÍ-LO E GERAR UM NOVO
    FILE* fp=fopen("relatorio.txt", "w");
    if(fp==NULL){
        printf("ERRO AO GERAR RELATÓRIO!\n");
        fclose(fp);
        exit(1);
    }
    FILE* fr=fopen("doacoes.txt", "w");
    if(fr==NULL){
        printf("ERRO AO GERAR RELATÓRIO!\n");
        fclose(fr);
        exit(1);
    }
    fprintf(fp,"   NOMES   |   LIVROS RECEBIDOS\n\n");
    fprintf(fr,"\tROUPAS DOADAS!\n\n");

    for(aux=li->p;aux!=NULL;aux=aux->p){
        fprintf(fp,"*%s  |  %s\n",aux->d.nome,aux->d.livro);
    }

    for(aux2=lr->p;aux2!=NULL;aux2=aux2->p){
        fprintf(fr,"* %s\n", aux2->roupa);
    }
    fprintf(fp,"\n\n=====FIM DA LISTA!=====\n");
    fprintf(fr,"\n\n=====FIM DA LISTA!=====\n");
    fclose(fp);
    fclose(fr);
}

/**FUNÇÃO PARA LIBERAR A LISTA DE RELATORIOS DA MEMÓRIA*/
void Libera_lista(ListaPe* L){
    ListaR* aux=L->p;
    while(aux!=NULL){
        ListaR* aux2 = aux->p;
        free(aux);
        aux = aux2;
    }
    free(L);
}

/**FUNÇÃO PARA LIBERAR A LISTA DA MEMÓRIA*/
void LiberaLista(ListaRoupa* L){
    ListaNo* aux=L->p;
    while(aux!=NULL){
        ListaNo* aux2 = aux->p;
        free(aux);
        aux = aux2;
    }
    free(L);
}
