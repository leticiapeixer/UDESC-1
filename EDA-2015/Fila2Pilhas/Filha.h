#include "PilhaGenerica.h"

#define ERRO_FILA_CHEIA -1
#define ERRO_FILA_VAZIA -2

typedef struct{
   PilhaGenerica p1, p2;
   int capacidade;
} Filha;

void inicializa(Filha *f, int c, int t);

int inserir(Filha *f, void *info);

int remover(Filha *f,void *info);

void transferePilha(PilhaGenerica *p1, PilhaGenerica *p2);

int filha_cheia(Filha *f);

int filha_vazia(Filha *f);

void mostra_filha(Filha f,void(*mostra)(void*));
