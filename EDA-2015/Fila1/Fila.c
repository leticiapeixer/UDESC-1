#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>

void inicializa_fila(Fila *f, int c){
     f-> capacidade = c;
     f->dados = malloc(sizeof(int) *c);
     f->inicio = f->fim =0;
     }
     
int inserir(Fila *f, int info){
         if(fila_cheia(*f))
         return ERROFILA_CHEIA;
         f->dados[f->fim] = info;
         f->num_ele++;
         if(f->fim == f->capacidade-1)
                   f->fim = 0;
                          else
                              f->fim++;         
}
         
         
int fila_cheia(Fila f){
         return f.num_ele == f.capacidade;
}
         
int fila_vazia(Fila f){
         return f.num_ele == 0;
}
         
int remover(Fila *f, int *info){
         if(fila_vazia(*f))
            return ERROFILA_VAZIA;
            *info = f->dados[f->inicio];
            f->num_ele--;
         if(f->inicio == f->capacidade -1)
             f->inicio = 0;
         else
             f->inicio++;
         
         return 1;             
}
         
         void mostra_fila(Fila f){
              int i;
              if(fila_vazia(f)){
                 printf("A fila esta vazia\n");            
              }else {
                   if(f.inicio<f.fim) {
                      for(i=f.inicio;i<f.fim;i++){
                        printf("%d\n", f.dados[i]);            
                      }                            
                   } else{
                     for(i=f.inicio;i<f.capacidade;i++){
                       printf("%d\n", f.dados[i]);            
                     }
                     for(i=0;i<f.fim;i++){
                       printf("%d\n", f.dados[i]);            
                     }                   
                }                         
         }
         }      











