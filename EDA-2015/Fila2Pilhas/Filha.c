#include "Filha.h"

void inicializa(Filha *f, int c, int t){
     PilhaGenerica p1;
     PilhaGenerica p2;
     inicializa_pilha(&p1, c, t);
     inicializa_pilha(&p2, c, t);
     f->capacidade = t;
}

int inserir(Filha *f, void *info){
    if(filha_cheia(f)){
     return ERRO_FILA_CHEIA;
    }
    return empilha(&f->p1, info);
}

int remover(Filha *f,void *info){
    if(filha_vazia(f)){
       return ERRO_FILA_VAZIA;
    }
    return desempilha(&f->p2, info);
}

void transferePilha(PilhaGenerica *p1, PilhaGenerica *p2){
   void *temp = malloc(p1->capacidade);  
   while(!pilha_vazia( *p1)){
      desempilha(p1, temp);
      empilha(p2, temp);
   }
}

int filha_cheia(Filha *f){
   transferePilha(&f->p2, &f->p1);
   return pilha_cheia(f->p1);
}

int filha_vazia(Filha *f){
   transferePilha(&f->p1, &f->p2);
   return pilha_vazia(f->p2);
}

void mostra_filha(Filha f,void(*mostra)(void*))
{
     int aux;
     if(filha_vazia(&f))
     {
       printf("Fila Vazia!\n");
     }
     else
     {
         printf("Dados da Fila:\n");
         mostra_pilha(f.p2, mostra);
                    printf("\n");
                             

     }
}


