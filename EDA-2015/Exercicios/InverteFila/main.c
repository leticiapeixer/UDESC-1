#include <stdio.h>
#include <stdlib.h>
#include "PilhaGenerica.h"
#include "FilaGenerica.h"
void mostra_float(void *info)
{
     printf("%.2f\n",*(float *)info);
}
 
int main(){
    FilaGenerica f1;
    inicializa_fila(&f1, 10, sizeof(float));
    float x = 2;
    inserir(&f1,&x); 
    x = 7;
    inserir(&f1,&x); 
    mostra_fila(f1, mostra_float);
    PilhaGenerica p1;
    inicializa_pilha(&p1, 10, sizeof(float)); 
    while(!fila_vazia (f1)){
    float temp;
    remover(&f1, &temp);
    empilha(&p1, &temp);
    }
    while(!pilha_vazia (p1)){
    float temp;
    desempilha(&p1, &temp);
    inserir(&f1, &temp);
    }
    
    mostra_fila(f1, mostra_float);
    
  system("PAUSE");	
  return 0;
}
