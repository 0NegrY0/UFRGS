/*----------------------------------------------------------------------------*/
/* UFPR – Bacharelado em Ciência da Computação                                */
/* CI057: Algoritmos e Estruturas de dados III, 2sem/2013                     */
/* Aluno: Marfan Fragoso Veras Junior - GRR20113754                           */
/*----------------------------------------------------------------------------*/

#ifndef _H_libArvRN
#define _H_libArvRN
#include<stdio.h>
#include<stdlib.h>

enum Cor {RED, BLACK};
typedef enum Cor TipoCor; 
typedef struct No *Apontador;
typedef struct No {
    int chave;
    TipoCor cor;
    Apontador pai;
    Apontador esq, dir;
}No;

Apontador raiz, nodonull;
/*----------------------------------------------------------------------------*/
/* aloca espaço na memoria para um novo nodo                                  */
/*----------------------------------------------------------------------------*/
Apontador arvRN_criaNodo (int k, Apontador esq, Apontador dir, Apontador pai);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* aloca espaço para as variaveis globais "nodonull" e "raiz"                 */
/*----------------------------------------------------------------------------*/
void arvRN_inicializa (void);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Faz a rotacao a Esquerda                                                   */ 
/*----------------------------------------------------------------------------*/
Apontador arvRN_rotEsq (Apontador r, Apontador p);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Faz a rotacao a Direita                                                    */ 
/*----------------------------------------------------------------------------*/
Apontador arvRN_rotDir (Apontador r, Apontador p);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Ajusta as cores dos nodos apos uma inserçao                                */ 
/*----------------------------------------------------------------------------*/
Apontador  arvRN_arrumaInsere ( Apontador r, Apontador p );
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Insere uma chave na arvore RN                                              */ 
/*----------------------------------------------------------------------------*/
Apontador arvRN_insere (Apontador p, int k);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Imprime a chave e sua cor com percurso em ordem                            */ 
/*----------------------------------------------------------------------------*/
void arvRN_imprimeEmOrdem (Apontador p);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Imprime a chave e sua cor com percurso em pre-ordem                        */ 
/*----------------------------------------------------------------------------*/
void arvRN_imprimeEmOrdem (Apontador p);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Imprime a chave e sua cor com percurso em pos-ordem                        */ 
/*----------------------------------------------------------------------------*/
void arvRN_imprimePosOrdem (Apontador p);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Encontra o nodo com a chave imediatamente maior que a chave do nodo p      */ 
/*----------------------------------------------------------------------------*/
Apontador arvRN_sucessor (Apontador p);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Ajusta as cores dos nodos apos uma remoçao                                 */ 
/*----------------------------------------------------------------------------*/
void arvRN_arrumaRem (Apontador T, Apontador x);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Remove um nodo da arvore RN                                                */ 
/*----------------------------------------------------------------------------*/
void arvRN_remove (Apontador r, Apontador nodok);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Busca o nodo que contem a chave k                                          */ 
/*----------------------------------------------------------------------------*/
Apontador arvRN_busca (Apontador p, int k);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
// desaloca todos os nodos exceto a raiz, que passa a apontar para nonull   
/*----------------------------------------------------------------------------*/
void arvRN_destroi (Apontador p);
/*----------------------------------------------------------------------------*/

#endif
