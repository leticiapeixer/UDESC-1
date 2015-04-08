#include "Fila.h"
#include <stdlib.h>
#include <stdio.h>

void inicializa_fila(Fila *f,int c)
{
   f->capacidade=c;
   f-> dados = malloc(sizeof(int)*c);
   f-> inicio = f -> fim = f->num_ele=0;
}

int inserir(Fila *f,int info)
{
     if(fila_cheia(*f))
          return ERRO_FILA_CHEIA;

     f->dados[f->fim]=info;
      f->num_ele++;

     if(f->fim == f->capacidade-1)
          f->fim=0;
     else
          f-> fim++;
          
     return 1;
}

int remover(Fila *f,int *info)
{
     if(fila_vazia(*f))
         return ERRO_FILA_VAZIA;
     *info = f->dados[f->inicio];
     f->num_ele--;
     if(f->inicio == f->capacidade-1)
     f->inicio=0;
     else
     f->inicio++;
     return 1;
     
}
void mostra_fila(Fila *f)
{
     int aux;
     if(fila_vazia(*f))
     {
       return;
     }
     else
     {
         if(f->inicio > f->fim)
         {
                  for(aux = f->fim;aux >= f->inicio;aux--)
                  {
                     printf("\n%d",f->dados[aux]);
                  }         
           }
           else
           {
                 for(aux = f->inicio;aux< f->fim;aux++)
                 {
                         printf("\n%d",f->dados[aux]);
                 }
           }
           printf("\n");
     }
}
int fila_cheia(Fila f)
{
    return f.num_ele == f.capacidade;
}

int fila_vazia(Fila f)
{
    return f.num_ele == 0;    
}
