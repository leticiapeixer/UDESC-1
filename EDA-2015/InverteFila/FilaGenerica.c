#include "FilaGenerica.h"
#include <stdlib.h>
#include <stdio.h>

void inicializa_fila(FilaGenerica *f,int c,int t)
{
   f->capacidade=c;
   f-> dados = (void**)malloc(sizeof(void*)*c);
   f-> tamInfo = t;
   f-> inicio = f -> fim = f->num_ele =0;
}

int inserir(FilaGenerica *f,void *info)
{
     if(fila_cheia(*f))
          return ERRO_FILA_CHEIA;

     f->dados[f->fim]= malloc(f->tamInfo);
     memcpy(f->dados[f->fim],info,f->tamInfo);
     f->num_ele++;
     if(f->fim == f->capacidade-1)
          f->fim=0;
     else
          f-> fim++;
          
     return 1;
}

int remover(FilaGenerica *f,void *info)
{
     if(fila_vazia(*f))
         return ERRO_FILA_VAZIA;
              
     memcpy(info,f->dados[f->inicio],f->tamInfo);
     free(f->dados[f->inicio]);
     f->num_ele--;
     if(f->inicio == f->capacidade-1)
     f->inicio=0;
     else
     f->inicio++;
     
     return 1;
     
}
void mostra_fila(FilaGenerica f,void(*mostra)(void*))
{
     int aux;
     if(fila_vazia(f))
     {
       printf("Fila Vazia!\n");
     }
     else
     {
         printf("Dados da Fila:\n");
         if(f.inicio < f.fim)
         {
                  for(aux = f.inicio;aux < f.fim;aux++)
                  {
                     mostra_float(f.dados[aux]);
                  }         
           }
           else
           {
                 for(aux = f.inicio;aux< f.capacidade;aux++)
                 {
                          mostra_float(f.dados[aux]);
                 }
                 for(aux = 0;aux< f.fim;aux++)
                 {
                          mostra_float(f.dados[aux]);
                 }
           }
           printf("\n");
     }
}
int fila_cheia(FilaGenerica f)
{
    return f.num_ele == f.capacidade;
}

int fila_vazia(FilaGenerica f)
{
    return f.num_ele == 0;    
}
