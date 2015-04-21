#include <stdio.h>
#include <stdlib.h>
#include "PilhaGenerica.h"

void mostra_float(void *x){
     float *f=(float*)x;
     printf("%f\n",*f);
}

int main(){
   PilhaGenerica p1;
   inicializa_pilha( &p1, 10, sizeof(float));
   float x=3;
   empilha(&p1, &x);
   x=6;
   empilha(&p1, &x);
   mostra_pilha(p1, mostra_float);
   
   system("PAUSE");
   return 0;
}
