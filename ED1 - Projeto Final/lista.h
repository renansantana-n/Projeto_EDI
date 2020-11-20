#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

/**TYPEDEF DO INICIO DA LISTA PARA OS ARQUIVOS FINAIS*/
typedef struct listapessoa ListaPe;

/**TYPEDEF DA ESTRUTURA PARA OS DADOS DOS ARQUIVOS FINAIS*/
typedef struct dados Ldados;

/**ESTRUTURA PARA ARMAZENAR OS DADOS DOS ARQUIVOS FINAIS*/
typedef struct listar ListaR;

/**PROT�TIPO DA FUNN��O PARA CRIAR A LISTA PARA OS ARQUIVOS FINAIS*/
ListaPe* cria_Lrel();

/**PROTOTIPO DA FUN��O QUE EXIBE AS INFORMA��ES DA DOA��O*/
void exibe_doa(ListaPe* li);

/**TYPEDEF DA ESTRUTURA CABE�A DA LISTA*/
typedef struct listaroupa ListaRoupa;

/**TYPEDEF DA ESTRUTURA DO CORPO DA LISTA CONTENDO O N�*/
typedef struct listano ListaNo;

/**PROTOTIPO DA FUN��O RESPONS�VEL POR CRIAR A LISTA*/
ListaRoupa* cria_lista();

/**PROTOTIPO DA FUN��O RESPONS�VEL POR VERIFICAR SE A LISTA ES� VAZIA OU N�O*/
int vaziaLI(ListaRoupa* L);

/**PROTOTIPO DA FUN��O PARA INSERIR ELEMENTO NA LISTA*/
void insereLI(ListaRoupa* L,char* roupa);

/**PROTOTIPO DA FUN��O PARA RETORNAR UMA ROUPA QUE EST� NA LISTA*/
char* retorna_roupa(ListaRoupa* l);

/**PROTOTIPO DA FUN��O QUE CADASTRA AS INFORMA��ES DA DOA��O NA LISTA PARA OS RELATORIOS FINAIS*/
void lista_rel(ListaPe* li,char* nome, char* livro);

/**PROTOTIPO DA FUN��O PARA EXIBIR A LISTA DE ROUPAS*/
void exibeLI(ListaRoupa* lr);

/**PROTOTIPO DA FUN��O PARA EXIBIR A LISTA DE ROUPAS*/
void ExibeInfo(ListaPe* lp);

/**PROTOTIPO DA FUN��O QUE VERIFICA A VACUIDADE DA LISTA DE RELATORIOS FINAIS*/
int lista_vazia(ListaPe* L);

/**PROTOTIPO DA FUN��O PARA CRIAR OS ARQUIVOS COM OS RELATORIOS DAS DOA��ES*/
void cria_arq(ListaPe* li,ListaRoupa* lr);

/**PROTOTIPO DA FUN��O PARA LIBERAR A LISTA DE RELATORIOS DA MEMORIA*/
void Libera_lista(ListaPe* L);

/**PROTORIPO DA FUN��O PARA LIBERAR A LISTA DE ROUPAS DA MEMORIA*/
void LiberaLista(ListaRoupa* L);

#endif // LISTA_H_INCLUDED
