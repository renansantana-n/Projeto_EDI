#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

/**TYPEDEF DO INICIO DA LISTA PARA OS ARQUIVOS FINAIS*/
typedef struct listapessoa ListaPe;

/**TYPEDEF DA ESTRUTURA PARA OS DADOS DOS ARQUIVOS FINAIS*/
typedef struct dados Ldados;

/**ESTRUTURA PARA ARMAZENAR OS DADOS DOS ARQUIVOS FINAIS*/
typedef struct listar ListaR;

/**PROTÓTIPO DA FUNNÇÃO PARA CRIAR A LISTA PARA OS ARQUIVOS FINAIS*/
ListaPe* cria_Lrel();

/**PROTOTIPO DA FUNÇÃO QUE EXIBE AS INFORMAÇÕES DA DOAÇÃO*/
void exibe_doa(ListaPe* li);

/**TYPEDEF DA ESTRUTURA CABEÇA DA LISTA*/
typedef struct listaroupa ListaRoupa;

/**TYPEDEF DA ESTRUTURA DO CORPO DA LISTA CONTENDO O NÓ*/
typedef struct listano ListaNo;

/**PROTOTIPO DA FUNÇÃO RESPONSÁVEL POR CRIAR A LISTA*/
ListaRoupa* cria_lista();

/**PROTOTIPO DA FUNÇÃO RESPONSÁVEL POR VERIFICAR SE A LISTA ESÁ VAZIA OU NÃO*/
int vaziaLI(ListaRoupa* L);

/**PROTOTIPO DA FUNÇÃO PARA INSERIR ELEMENTO NA LISTA*/
void insereLI(ListaRoupa* L,char* roupa);

/**PROTOTIPO DA FUNÇÃO PARA RETORNAR UMA ROUPA QUE ESTÁ NA LISTA*/
char* retorna_roupa(ListaRoupa* l);

/**PROTOTIPO DA FUNÇÃO QUE CADASTRA AS INFORMAÇÕES DA DOAÇÃO NA LISTA PARA OS RELATORIOS FINAIS*/
void lista_rel(ListaPe* li,char* nome, char* livro);

/**PROTOTIPO DA FUNÇÃO PARA EXIBIR A LISTA DE ROUPAS*/
void exibeLI(ListaRoupa* lr);

/**PROTOTIPO DA FUNÇÃO PARA EXIBIR A LISTA DE ROUPAS*/
void ExibeInfo(ListaPe* lp);

/**PROTOTIPO DA FUNÇÃO QUE VERIFICA A VACUIDADE DA LISTA DE RELATORIOS FINAIS*/
int lista_vazia(ListaPe* L);

/**PROTOTIPO DA FUNÇÃO PARA CRIAR OS ARQUIVOS COM OS RELATORIOS DAS DOAÇÕES*/
void cria_arq(ListaPe* li,ListaRoupa* lr);

/**PROTOTIPO DA FUNÇÃO PARA LIBERAR A LISTA DE RELATORIOS DA MEMORIA*/
void Libera_lista(ListaPe* L);

/**PROTORIPO DA FUNÇÃO PARA LIBERAR A LISTA DE ROUPAS DA MEMORIA*/
void LiberaLista(ListaRoupa* L);

#endif // LISTA_H_INCLUDED
