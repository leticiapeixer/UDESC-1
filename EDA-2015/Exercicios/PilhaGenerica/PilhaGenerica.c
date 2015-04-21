#include "PilhaGenerica.h"
void inicializa_pilha(PilhaGenerica *p, int c, int t){
     p -> topo =-1;
     p  -> capacidade = c;
     p -> tamInfo = t;
     p -> dados = (void**) malloc(sizeof(void*) *c);
}

int pilha_vazia(PilhaGenerica p){
    return p.topo ==-1;
}

int pilha_cheia(PilhaGenerica p){
    return p.topo == p.capacidade-1;
}

int empilha(PilhaGenerica *p, void *info){
    if(pilha_cheia(*p))
        return ERRO_PILHA_CHEIA;

    p -> topo++;
    p -> dados[p->topo] = malloc(p -> tamInfo);
    memcpy(p -> dados[p -> topo ], info, p -> tamInfo);
    return 1;
}

int desempilha(PilhaGenerica*p, void *info){
    if(pilha_vazia(*p))
       return ERRO_PILHA_VAZIA;
    memcpy(info, p -> dados[p -> topo ], p -> tamInfo);
    free(p -> dados[p -> topo]);
    p -> topo --;
    return 1;
}

void mostra_pilha(PilhaGenerica p, void(*mostra)(void*)){
     if(pilha_vazia(p)){
        printf("Pilha vazia! \n");
     } else {
          printf("Dados da pilha:\n");   
          int i;
          for(i = 0; i<= p.topo; i++){	
             mostra(p.dados[i]);
          }
     }  
}

