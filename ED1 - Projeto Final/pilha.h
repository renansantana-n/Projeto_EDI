#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

/**Typedef DA ESTRUTURA TOPO DA PILHA*/
typedef struct pilhapri PilhaPri;

/**Typedef DA ESTRUTURA DA PILHA*/
typedef struct pilhano PilhaNo;

/**PROTOTIPO DA FUNÇÃO QUE CRIA A PILHA DO TOPO*/
PilhaPri* cria_pilha();

/**PROTOTIPO DA FUNÇÃO QUE INSERE LIVRO NO TOPO DA PILHA*/
void inserePI(PilhaPri* pi, char* livro);

/**PROTOTIPO DA FUNÇÃO RESPONSÁVEL POR ANALIZAR SE A PILHA ESTÁ VAZIA*/
int VaziaPI(PilhaPri* pi);

/**PROTOTIPO DA FUNÇÃO QUE EXIBE A PILHA SELECIONADA PELO USUÁRIO*/
void ExibePI(PilhaPri* pi);

/**PROTOTIPO DA FUNÇÃO PARA RETORNAR O ULTIMO LIVRO DA PILHA*/
char* pilha_retorna(PilhaPri* p);

/**PROTOTIPO DA FUNÇÃO RESPONSÁVEL POR LIBERAR A/AS PILHA/AS*/
void libera_pilha(PilhaPri* pi);

#endif // PILHA_H_INCLUDED
