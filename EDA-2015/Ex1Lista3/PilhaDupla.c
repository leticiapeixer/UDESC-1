#include "PilhaDupla.h"
//inicializa, pilha1_vazia, pilha2_vazia, pilhas_cheias, empilha1, empilha2, desempilha1 e
//desempilha2

void inicializa(PilhaDupla *p, int c, int t){
     p -> topo1 =-1;
     p -> topo2 = c;
     p -> capacidade = c;
     p -> tamInfo = t;
     p -> dados = (void**) malloc(sizeof(void*) *c);
}

int pilha1_vazia(PilhaDupla p){
    return p.topo1 ==-1;
}

int pilha2_vazia(PilhaDupla p){
    return p.topo2 == p.capacidade;
}

int pilhas_cheias(PilhaDupla p){
    return p.topo1 == p.topo2-1;
}

int empilha1(PilhaDupla *p, void *info){
    if(pilhas_cheias(*p))
        return ERRO_PILHA_CHEIA;

    p -> topo1++;
    p -> dados[p->topo1] = malloc(p -> tamInfo);
    memcpy(p -> dados[p -> topo1 ], info, p -> tamInfo);
    return 1;
}

int empilha2(PilhaDupla *p, void *info){
    if(pilhas_cheias(*p))
        return ERRO_PILHA_CHEIA;

    p -> topo2--;
    p -> dados[p->topo2] = malloc(p -> tamInfo);
    memcpy(p -> dados[p -> topo2 ], info, p -> tamInfo);
    return 1;
}

int desempilha1(PilhaDupla*p, void *info){
    if(pilha1_vazia(*p))
       return ERRO_PILHA_VAZIA;
    memcpy(info, p -> dados[p -> topo1 ], p -> tamInfo);
    free(p -> dados[p -> topo1]);
    p -> topo1 --;
    return 1;
}

int desempilha2(PilhaDupla*p, void *info){
    if(pilha2_vazia(*p))
       return ERRO_PILHA_VAZIA;
    memcpy(info, p -> dados[p -> topo2 ], p -> tamInfo);
    free(p -> dados[p -> topo2]);
    p -> topo2 ++;
    return 1;
}

void mostra_pilha1(PilhaDupla p, void(*mostra)(void*)){
     if(pilha1_vazia(p)){
        printf("Pilhas vazias! \n");
     } else {
          printf("Dados da pilha:\n");   
          int i;
          for(i = 0; i<= p.topo1; i++){	
             mostra(p.dados[i]);
          }
     }  
}

void mostra_pilha2(PilhaDupla p, void(*mostra)(void*)){
     if(pilha2_vazia(p)){
        printf("Pilhas vazias! \n");
     } else {
          printf("Dados da pilha:\n");   
          int i;
          for(i = p.capacidade-1; i >= p.topo2; i--){	
             mostra(p.dados[i]);
          }
     }  
}

