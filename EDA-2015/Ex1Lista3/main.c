#include <stdio.h>
#include <stdlib.h>
#include "PilhaDupla.h"

void mostra_float(void *x){
     float *f=(float*)x;
     printf("%f\n",*f);
}

int main(){
   PilhaDupla p1;
   inicializa( &p1, 10, sizeof(float));
   float x=0;
   empilha1(&p1, &x);
   x=1;
   empilha1(&p1, &x);
   x=2;
   empilha1(&p1, &x);
   x=3;
   empilha1(&p1, &x);
   x=1;
   empilha2(&p1, &x);
   x=2;
   empilha2(&p1, &x);
   mostra_pilha1(p1, mostra_float);
   mostra_pilha2(p1, mostra_float);
   
   system("PAUSE");
   return 0;
}
