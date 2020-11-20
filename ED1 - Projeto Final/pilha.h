#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

/**Typedef DA ESTRUTURA TOPO DA PILHA*/
typedef struct pilhapri PilhaPri;

/**Typedef DA ESTRUTURA DA PILHA*/
typedef struct pilhano PilhaNo;

/**PROTOTIPO DA FUN��O QUE CRIA A PILHA DO TOPO*/
PilhaPri* cria_pilha();

/**PROTOTIPO DA FUN��O QUE INSERE LIVRO NO TOPO DA PILHA*/
void inserePI(PilhaPri* pi, char* livro);

/**PROTOTIPO DA FUN��O RESPONS�VEL POR ANALIZAR SE A PILHA EST� VAZIA*/
int VaziaPI(PilhaPri* pi);

/**PROTOTIPO DA FUN��O QUE EXIBE A PILHA SELECIONADA PELO USU�RIO*/
void ExibePI(PilhaPri* pi);

/**PROTOTIPO DA FUN��O PARA RETORNAR O ULTIMO LIVRO DA PILHA*/
char* pilha_retorna(PilhaPri* p);

/**PROTOTIPO DA FUN��O RESPONS�VEL POR LIBERAR A/AS PILHA/AS*/
void libera_pilha(PilhaPri* pi);

#endif // PILHA_H_INCLUDED
