#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

/**TYPEDEF DA ESTRUTURA DA LISTA PARA A FILA*/
typedef struct listaf ListaFI;

/**TYPEDEF DA ESTRUTURA DA FILA*/
typedef struct filal FilaLI;

/**PROTOTIPO DA FUN플O QUE CRIA A FILA*/
FilaLI* cria_FilaLI();

/**PROTOTIPO DA FUN플O QUE INSERE UMA PESSOA NA FILA*/
void fila_insere(FilaLI* f,char* nome,char* roupa);

/**PROTOTIPO DA FUN플O RESPONS햂EL POR VERIFICAR A VACUIDADE DA FILA*/
int fila_vazia(FilaLI* f);

/**PROTOTIPO DA FUN플O PARA RETIRAR UMA PESSOA DA FILA*/
char* fila_retiraP(FilaLI* f);

/**PROTOTIPO DA FUN플O PARA RETIRAR UMA ROUPA NA FRENTE DA FILA*/
char* fila_retiraR(FilaLI* f);

/**PROTOTIPO DA FUN플O PARA EXIBIR A FILA DE ESPERA*/
void fila_exibe(FilaLI* f);

/**PROTOTIPO DA FUN플O PARA LIBERAR A FILA DA MEMORIA*/
void fila_libera(FilaLI* f);

#endif // FILA_H_INCLUDED
